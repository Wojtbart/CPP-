#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <time.h>
#include "biblioteka.h"

int main(int argc, char *argv[])
{
	int i, wartosc, losowa=0;
	pid_t PID=getpid(); 
	char LiczbaSekcji;
	sem_t *semafor;
	char *NazwaSemafora;

	LiczbaSekcji=atoi(argv[1]);
	NazwaSemafora=argv[2];
	
	srand(time(NULL));
	losowa=rand()%6+1;
	

	printf("Rozpoczecie sekcji krytycznej\n\n");

	semafor=Stworz_SemaforNazwany(NazwaSemafora, 0);

	for(i=1; i<=LiczbaSekcji; i++)
	{
		Info_Wartosc_Semafora(&semafor, &wartosc);
		printf("Proces o PID=%d przed %d sekcja krytyczna, wartosc semafora: %d\n\n", PID, i, wartosc);

		Opusc_Semafor(semafor);

		Info_Wartosc_Semafora(&semafor, &wartosc);
		printf("Proces o PID=%d w trakcie %d sekcji krytycznej, wartosc semafora: %d\n\n", PID, i, wartosc);

		sleep (losowa);
		Podnies_Semafor(semafor);

		Info_Wartosc_Semafora(&semafor, &wartosc);
		printf("Proces o PID=%d po %d sekcji krytycznej, wartosc semafora: %d\n\n", PID, i, wartosc);
		sleep(losowa);	
	}
	printf("Koniec Sekcji krytycznej\n\n");

	Zamknij_SemaforNazwany(semafor);

return 0;

}


