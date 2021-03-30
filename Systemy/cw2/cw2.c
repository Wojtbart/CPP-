#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

#define Sciezka "./"

int main(int argc, char *argv[])
{
    int i;
    char NazwaSciezki[200];	
     if(argc!=2)
     {
	printf("Potrzeba jednego argumentu!\n");
	exit(-1); //-1 gdy jest blad
     }
	sprintf(NazwaSciezki,"%s%s",Sciezka,argv[1]);
	  
    for(i=1; i<=3; i++)
    {
        switch (fork())
        {
            case -1:
            perror("FORK ERROR!");
            exit(1); //koniec programu gdy jest blad
	    break;

            case  0: //tworzenie potomka
	    if (execl(NazwaSciezki, argv[1], NULL)==-1)
	    {
	    	perror("Execl nie powiodlo sie");
	        _exit(2); //konczenie procesu
	    }
	    
            break;  //koniec potomka

            default:
            wait(NULL);  //macierzysty czeka na zakonczenie zycia potomka
	    break;
        };
    }

    return 0;
}
