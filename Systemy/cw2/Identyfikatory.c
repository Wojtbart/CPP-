#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
int main()
{
    int i;
	   
	    printf("\nGID to: %d\n",getgid());
            printf("UID to: %d\n",getuid());
            printf("PID to: %d\n",getpid());
            printf("PPID to: %d\n",getppid());
            printf("PGID to: %d\n",getpgrp());

    return 0;
}
