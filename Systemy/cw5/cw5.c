#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <time.h>

int main()
{
	char *potok = "./potok";
	
	if (mkfifo(potok, 0777) == -1)
	{
        	perror("BLAD POTOKU!\n");
        	exit(1);
    	}

	switch(fork())
	{
    		case -1:
        		perror("Blad funkcji FORK!\n");
        		exit(2);
    			break;
    		case 0:
			if(execl("./producent.o","producent.o",potok,NULL) == -1)
			{
                		perror("BLAD funkcji EXEC!\n");
                		exit(3);
            		}
    			break;
		default:
			if(execl("./konsument.o","konsument.o",potok,NULL) == -1)
			{
                		perror("BLAD funkcji EXEC!\n");
                		exit(4);
            		}
			wait(NULL);
    			break;
    	 }
	return 0;
}
