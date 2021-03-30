#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
    int i;

	    printf("GID to: %d\n",getgid());
            printf("UID to: %d\n",getuid());
            printf("PID to: %d\n",getpid());
            printf("PPID to: %d\n",getppid());
            printf("PGID to: %d\n",getpgrp());

    for(i=1; i<=3; i++)
    {
        switch (fork())
        {
            case -1:
            perror("FORK ERROR!");
            exit(1); //koniec programu gdy jest blad

            case  0: //tworzenie potomka
	    printf("\n");
            printf("GID to: %d\n",getgid());
            printf("UID to: %d\n",getuid());
            printf("PID to: %d\n",getpid());
            printf("PPID to: %d\n",getppid());
            printf("PGID to: %d\n",getpgrp());
            break;  //koniec potomka

            default:
            wait(NULL);  //macierzysty czeka na zakonczenie zycia potomka
        };
    }

    return 0;
}
