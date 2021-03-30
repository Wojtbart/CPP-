#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <wait.h>

#define MAKS 18 //max rozmiar w bajtach

int main(int argc, char *argv[])
{
	int filedes[2];
	int LICZBA_BAJT;
	char dane[MAKS]; 
	srand(time(NULL));
	int losowa;

	argv[1] = "wejscie.txt";	
	argv[2] = "wyjscie.txt";

 	if(argc!=3) //sprawdz czy ilosc argumentow jest rozna od 3
	{
		printf("Podano niepawidlowa ilosc argumentow!\n");
		printf("Prosze podac nazwa plik wejsciowego i wyjsciowego\n");
		exit(1); 
	}

	if (pipe(filedes)==-1)
	{
		perror("Wystapil blad!");
		exit(2);  
	}

	switch(fork()) 
	{
	case -1:
		perror("Blad funkcji FORK!");
		exit(3);
		break;
	case 0: //proces producent
		{
		int wejscie = open(argv[1], O_RDONLY | O_CREAT , 0777);

		if (wejscie == -1)
		{
			perror("Blad otwarcia zrodla!");
			exit(4);  
		}
		  
		while((LICZBA_BAJT=read(wejscie, dane, MAKS))> 0)
		{
			if (LICZBA_BAJT == 0) 
			{
				close(filedes[1]);
				break;
			}

			write(1,"\nKonsument: ",sizeof("Konsument: "));
                	write(1, dane, LICZBA_BAJT);

			if(LICZBA_BAJT!=MAKS)
			{
				write(filedes[1], dane, LICZBA_BAJT);
			}
			write(filedes[1], dane, MAKS);

			losowa=rand()%6+1;
			sleep(losowa);
		}
			
			if((close(wejscie) || close(filedes[0]))==-1)
			{
				perror("Wystapil blad zamkniecia pliku!");
				exit(5);
			}
			printf("Koniec produkcji!\n");
		break;
		}
	default:   //proces konsument
		{ 
		int wyjscie = open(argv[2], O_WRONLY| O_TRUNC | O_CREAT , 0777);

		if (wyjscie == -1)
		{
			perror("Wystapil blad utworzenia pliku docelowego!");
			exit(6);  
		}
		close(filedes[1]);
		while((LICZBA_BAJT= read(filedes[0], dane, MAKS))> 0)
		{
			if (LICZBA_BAJT == -1)
			{
				perror("Blad odczytu pliku!");
				break;
			}
			write(1,"Dodano: ",sizeof("Dodano: "));
		        write(1, dane, LICZBA_BAJT);
			
			if(LICZBA_BAJT==0) break;

			if(LICZBA_BAJT != MAKS)
			{
				write(wyjscie, dane, LICZBA_BAJT);
			}

			write(wyjscie, dane, MAKS);
			losowa=rand()%8+1;
			sleep(losowa);
		}
			if((close(wyjscie) || close(filedes[0]))==-1)
			{
				perror("Wystapil blad zamkniecia pliku!");
				exit(7);
			}		
			printf("Koniec konsumpcji!\n");
			wait(NULL);
		break;
		}
	}	
	return 0;
}
