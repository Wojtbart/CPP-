#include <stdio.h>
#include <stdlib.h>
#include <sys/mman.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include "biblioteka.h"

#define LICZBA_BAJT 20  // Rozmiar elementu bufora (jednostki towaru) w bajtach
#define ILOSC_ELEM  5  // Liczba elementow bufora
#define KONIEC '\0'
#define LICZBA_PROCESOW_POTOMNYCH 2

// Segment pamieci dzielonej
typedef struct 
{
	char bufor[LICZBA_BAJT];     // Wspolny bufor danych
	int  wstaw, wyjmij;        // Pozycje wstawiania i wyjmowania z bufora

}SegmentPD;

int main()
{

	int fd;// zmienna trzymajaca deskryptory pliku
	char *NazwaSemafora1="/semaforek1";
	char *NazwaSemafora2="/semaforek2";
	char *NazwaPamieciDz="/pamiecdz";
	sem_t *semaforPROD;
	sem_t *semaforKONS;
	int wejscie,wyjscie;
	int i,Koniec=0;
	
	
	fd=Otworz_obiekt(NazwaPamieciDz);
	Ustaw_rozmiar(fd, LICZBA_BAJT*ILOSC_ELEM);
	
	
	Stworz_SemaforNazwany(NazwaSemafora1,ILOSC_ELEM);
	Stworz_SemaforNazwany(NazwaSemafora2,0);
	
	semaforPROD=Otworz_SemaforNazwany(NazwaSemafora1);
	semaforKONS=Otworz_SemaforNazwany(NazwaSemafora2);

	

	switch(fork())
	{
		case -1:
			perror("Blad funkcji fork!\n");
			exit(1);
		break;

		case 0: //Konsument
		{	

	SegmentPD *wpd=(SegmentPD *) mmap(NULL,(sizeof(SegmentPD)*ILOSC_ELEM), PROT_READ | PROT_WRITE, MAP_SHARED,fd,0); 
		if(wpd==MAP_FAILED)
		{
			perror("Blad przy tworzeniu odwzorowania!\n");
			exit(3);
		}

		printf("\nKonsument otwiera plik, gdzie wysle towar!\n");

			if((wyjscie=open("./wyjscie.txt", O_CREAT|O_WRONLY|O_TRUNC, 0777))==-1)
			{
				perror("Blad otwarcia pliku wyjsciowego!\n");
				exit(2);
			}

		int wyjmij=0;
	
		SegmentPD KonsTowar;

		while (1)
		{
			// Konsumpcja towaru
			sleep(1.5);
			Opusc_Semafor(semaforKONS); // Opusc semafor Konsumenta
			KonsTowar=*(wpd+wyjmij);
			wyjmij = (wyjmij + 1) % LICZBA_BAJT; // Przesun pozycje wstawiania o 1 dalej

			for(i=0; i<LICZBA_BAJT; i++)
			{
				if(KonsTowar.bufor[i]==KONIEC)
				{
					Koniec=100;
					break;
				}
			}

			write(1,"Skonsumowano: ",sizeof("Skonsumowano: "));
		    	write(1,KonsTowar.bufor, sizeof(KonsTowar.bufor)-1);

			if(Koniec==100)
			{
				if(write(wyjscie, KonsTowar.bufor, i ) == -1)
				{
					perror("Blad zapisu\n");
				}
				break;
			}
			Podnies_Semafor(semaforPROD); // Podniesc semafor Producenta
		}


			if(close(wyjscie)==-1)
			{	
				perror("Blad zamkniecia pliku!\n");
				exit(5);
			}
			Zamknij_SemaforNazwany(semaforPROD);
			Zamknij_SemaforNazwany(semaforKONS);
			Usun_odwzorowanie(wpd, sizeof(SegmentPD)*ILOSC_ELEM);
			Zamknij_obiekt(fd);

		break;
		}
		default: //Producent
		{

	SegmentPD *wpd=(SegmentPD *) mmap(NULL,(sizeof(SegmentPD)*ILOSC_ELEM), PROT_READ | PROT_WRITE, MAP_SHARED,fd,0); 
			if(wpd==MAP_FAILED)
			{
				perror("Blad przy tworzeniu odwzorowania!\n");
				exit(3);
			};
			
			printf("Producent otwiera plik z towarem!\n");
			if((wejscie=open("./wejscie.txt", O_RDONLY, 0777))==-1)
			{
				perror("Blad otwarcia pliku wejsciowego!\n");
				exit(5);
			}

			int wstaw=0;

			SegmentPD ProducTowar;
			while(1)
			{
				int pomocnicza;
				
				Opusc_Semafor(semaforPROD); // Opusc semafor Producenta

				if((pomocnicza=read(wejscie, ProducTowar.bufor, LICZBA_BAJT))==-1)
				{
					perror("Blad czytania z pliku wejsciowego!\n");
					exit(6);
				}

				write(1,"Wyprodukowano: ",sizeof("Wyprodukowano: "));
				write(1, ProducTowar.bufor, sizeof(ProducTowar.bufor)-2);
				
				if(strlen(ProducTowar.bufor)!=pomocnicza)
				{
					ProducTowar.bufor[pomocnicza]=KONIEC;
					*(wpd+wstaw)=ProducTowar;	
					Podnies_Semafor(semaforKONS); // Podniesc semafor Konsumenta
					break;	
				}

				*(wpd+wstaw)=ProducTowar;
				wstaw=(wstaw+1)%LICZBA_BAJT;	
				Podnies_Semafor(semaforKONS); // Podniesc semafor Konsumenta
			}

			if(close(wejscie)==-1)
			{	
				perror("Blad zamkniecia pliku!\n");
				exit(8);
			}
			Zamknij_SemaforNazwany(semaforPROD);
			Zamknij_SemaforNazwany(semaforKONS);
			Usun_odwzorowanie(wpd, (sizeof(SegmentPD)*ILOSC_ELEM));
			Zamknij_obiekt(fd);

			for(i=0;i<LICZBA_PROCESOW_POTOMNYCH;i++)
			{
				wait(NULL);
			}
		
			Usun_obiekt(NazwaPamieciDz);
			Usun_SemaforNazwany(NazwaSemafora1);
			Usun_SemaforNazwany(NazwaSemafora2);
				
		break;		
		}
	}
	
	return 0;
}

