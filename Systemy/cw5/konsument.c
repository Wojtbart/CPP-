#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <wait.h>
#include <sys/types.h>
#include <sys/stat.h>

#define MAKS 18 //max rozmiar w bajtach

int main(int argc, char *argv[])
{
	int filedes[2];
	int LICZBA_BAJT;
	char dane[MAKS]; 
	srand(time(NULL));
	int POTOK, losowa;
	char *potok=argv[1];

	if((POTOK=open(potok, O_RDONLY))==-1)
	{
		perror("BLAD OTWARCIA POTOKU!\n");
		exit(1);
	}
	
		int wyjscie = open("./wyjscie.txt", O_WRONLY| O_TRUNC | O_CREAT , 0777);

		if (wyjscie == -1)
		{
			perror("Wystapil blad utworzenia pliku docelowego!");
			exit(2);  
		}
		close(filedes[1]);
		while((LICZBA_BAJT= read(POTOK, dane, MAKS))> 0)
		{
			if (LICZBA_BAJT == -1)
			{
				perror("Blad odczytu pliku!");
				exit(3);
			}
			write(1,"Skonsumowano: ",sizeof("Skonsumowano: "));
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
			if((close(wyjscie) || close(filedes[0]) || unlink(potok))==-1)
			{
				perror("Wystapil blad zamkniecia pliku!");
				exit(4);
			}		
			printf("Koniec konsumpcji!\n");

	return 0;
}
