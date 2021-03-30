#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <semaphore.h>
#include "biblioteka.h"

#define Sciezka "./"

int main(int argc, char *argv[])
{
    int i;
    char NazwaSciezki[200];
    sem_t *semafor;
    char *NazwaSemafora="/semafor";
    char LiczbaProcesow;

    LiczbaProcesow=atoi(argv[2]);
    semafor=Stworz_SemaforNazwany(NazwaSemafora,1);
    sprintf(NazwaSciezki,"%s%s",Sciezka,argv[1]);
	
     if(argc!=4)
     {
	printf("Nieprawidlowa ilosc argumentow!\n");
	exit(1); 
     }
       
    for(i=1; i<=LiczbaProcesow; i++)
    {
        switch (fork())
        {
            case -1:
            perror("FORK ERROR!\n");
            exit(2);
 
	    break;

            case  0: 
	    if (execl(NazwaSciezki,argv[1],argv[3], NazwaSemafora, NULL)==-1)
	    {
	    	perror("Execl nie powiodlo sie!\n");
	        exit(3);
	    }
	    
            break;  

            default:
		wait(NULL);
	    break;
        };
    }

  Usun_SemaforNazwany(NazwaSemafora);
    return 0;
}
