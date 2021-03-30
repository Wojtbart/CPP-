#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
 

    printf("GID to: %d\t",getgid());
    printf("UID to: %d\t",getuid());
    printf("PID to: %d\t",getpid());
    printf("PPID to: %d\t",getppid());
    printf("PGID to: %d\n",getpgrp());

   
    return 0;
}
