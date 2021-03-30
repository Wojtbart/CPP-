#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <time.h>
#include <wait.h>
#include <sys/types.h>
#include <sys/stat.h>

#define MAKS 18 

int main(int argc, char *argv[])
{
	int filedes[2];
	int LICZBA_BAJT;
	char dane[MAKS]; 
	srand(time(NULL));
	int POTOK, losowa;
	char *potok=argv[1];

	if ((POTOK=open(potok, O_WRONLY)) == -1)
	{
		perror("BLAD OTWARCIA POTOKU!");
		exit(1);  
	}

		int wejscie = open("./wejscie.txt", O_RDONLY  , 0777);

		if (wejscie == -1)
		{
			perror("Blad otwarcia zrodla!");
			exit(2);  
		}
		  
		while((LICZBA_BAJT=read(wejscie, dane, MAKS))> 0)
		{
			if (LICZBA_BAJT == 0) 
			{
				close(filedes[1]);
				break;
			}

			write(1,"\nWyprodukowano: ",sizeof("Wyprodukowano: "));
                	write(1, dane, LICZBA_BAJT);

			if(LICZBA_BAJT!=MAKS)
			{
				write(POTOK, dane, LICZBA_BAJT);
			}
			write(POTOK, dane, MAKS);

			losowa=rand()%6+1;
			sleep(losowa);
		}
			
			if((close(wejscie) || close(filedes[0]) )==-1)
			{
				perror("Wystapil blad zamkniecia pliku!");
				exit(3);
			}
			printf("Koniec produkcji!\n");
	return 0;
}
