#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // do execla
#include <signal.h> //do sygnalow
#include <sys/types.h> //do sygnalow
#include <sys/wait.h>

int main(int argc,char *argv[])
{
	int i;
	pid_t PID=getpid();
	pid_t PGID=getpgid(PID);	

 	if(argc!=3) //sprawdz czy ilosc argumentow  jest rozna 3, jesli tak to
	{
		perror("Podano niepawidlowa ilosc argumentow!\n");
		printf("Funkcja przyjmuje 2 argumenty: [1..3]-sposob obslugi sygnalu, [x]-numer sygnalu\n");
            	printf("Polecenie kill -l w terminalu wyswietla sygnaly oraz ich numery \n");
		exit(3); //zakoncz
	}
	
	printf("PID oraz PGID to: %d, %d\n", PID, PGID);

	int operacja=atoi(argv[1]);
	int sygnal=atoi(argv[2]);

	for(i=0; i<4; i++)
	{
		sleep(1.5);
		switch(PID=fork())
		{
			
			case -1:
				{
					perror("Blad funkcji fork!!!\n");
					exit(1);
					break;
				}
			case 0: //Proces potomny
				{
					pid_t PID=getpid();
					pid_t PGID=getpgid(PID);
					int j;
					printf("PID oraz PGID dla potomnego to: %d, %d\n", PID, PGID); 
					setpgid(PID,0);
					for(j=0; j<4; j++)
					{
						if(execl("./CW3a.o", "CW3a.o", argv[1], argv[2], NULL)==-1)
						{
							perror("Problem z funkcja exec!\n");
							_exit(2); 
						}
					}
					break;
				}
				
			default: //Proces macierzysty
				{
					sleep(1.5); 
					getpgid(PID);
					int k;
					for(k=0; k<4; k++)
					{
						if(kill(-PID, sygnal)==-1)
						{
							perror("Proces nie istnieje!\n");
							exit(4);
						}
					}	
					wait(NULL);
					break;
				}
		}
	
	}
	
	printf("Zakonczono pomyslnie!\n");
}
