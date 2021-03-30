#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>  // do execla
#include <signal.h> //do sygnalow
#include <sys/types.h> //do sygnalow
#include <sys/wait.h> 

int main(int argc,char *argv[])
{

	pid_t PID=getpid();	

 	if(argc!=3) //sprawdz czy ilosc argumentow  jest rozna 3, jesli tak to
	{
		perror("Podano niepawidlowa ilosc argumentow!\n");
		printf("Funkcja przyjmuje 2 argumenty: [1..3]-sposob obslugi sygnalu, [x]-numer sygnalu\n");
            	printf("Polecenie kill -l w terminalu wyswietla sygnaly oraz ich numery \n");
		exit(0); //zakoncz
	}
	
	printf("PID macierzystego to:%d\n",PID);

	int operacja=atoi(argv[1]);
	int sygnal=atoi(argv[2]);

	switch(PID=fork())
	{
		case -1:
			perror("Blad funkcji fork\n!!!");
			exit(1);
			break;
		case 0: //Proces potomny

			if(execl("./CW3a.o", "CW3a.o", argv[1], argv[2], NULL)==-1)
			{
				perror("Problem z funkcja exec!\n");
			}
			_exit(2); 
			break;
		default: //Proces macierzysty

			sleep(2.5); 
			if(kill(PID, sygnal)==-1)
			{
				perror("Proces nie istnieje!\n");
				exit(3);
			}			
			printf("Do procesu potomnego wyslano sygnal!\n");	
			wait(NULL);
			break;
	}
	
	printf("Zakonczono pomyslnie!\n");
}
