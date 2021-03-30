#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    int i;

    setpgid(getpid(),0); //ustawia takie samo pid jak i pgid
    printf("PID to: %d\n",getpid());
    printf("PPID to: %d\n",getppid());
    printf("PGID to: %d\n",getpgrp());

    for(i=1; i<=3; i++)
    {
        switch (fork())
        {
            case -1:
            perror("FORK ERROR!"); //blad
            exit(1); //koniec programu gdy jest blad

            case 0: //tworzenie potomka
            setpgid(getpid(),0); //ustawia takie samo pid jak i pgid
	    printf("\n");

            printf("PID to: %d\n",getpid());
            printf("PPID to: %d\n",getppid());
            printf("PGID to: %d\n",getpgrp());
	    
            break;  //koniec potomka

            default:
            wait(NULL);  //macierzysty czeka na zakonczenie zycia potomka
	    break;
        };
    }

    return 0;
}
