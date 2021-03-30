#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>


int main()
{
    int i;

	    printf("\nGID to: %d\n",getgid());
            printf("UID to: %d\n",getuid());
            printf("PID to: %d\n",getpid());
            printf("PPID to: %d\n",getppid());
            printf("PGID to: %d\n\n",getpgrp());

    for(i=1; i<=3; i++)
    {
        switch (fork())
        {
            case -1:
            perror("FORK ERROR!"); //blad
            exit(1); //koniec programu gdy jest blad

            case 0: //tworzenie potomka
            printf("\nGID to: %d\n",getgid());
            printf("UID to: %d\n",getuid());
            printf("PID to: %d\n",getpid());
            printf("PPID to: %d\n",getppid());
            printf("PGID to: %d\n\n",getpgrp());
	    sleep(1.5);
            break;  //koniec potomka

            default:
	    break;
        };
    }

    return 0;
}
