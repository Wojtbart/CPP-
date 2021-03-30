#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <signal.h>
#include <sys/types.h>


void my_sighandler(int signal)
{
	printf("Funkcja wykonujaca-wlasna obsluga sygnalu%d\n", signal);
}

void Signals(int operacja, int sygnal)
{
	switch (operacja)
	{
		case 1:
		{
			  if(signal(sygnal, SIG_DFL)==SIG_ERR)
			  {
				perror("Wystapil problem z domyslna obsluga sygnalu\n");
				exit(1); //blad	
			  }
		}
			break;

		case 2:
		{
			  if(signal(sygnal, SIG_IGN)==SIG_ERR)
			  {
				perror("Wystapil problem z ignoracja sygnalu\n");
				exit(2); //blad	
			  }
		}
			break;

		case 3:
		{
			  if(signal(sygnal, my_sighandler)==SIG_ERR)
			  {
				perror("Wystapil problem z wlasna obsluga sygnalu\n");
				exit(3); //blad	
			  }
		}
			break;

		default:
		{
			perror ("Wprowadzono nieprawidlowy pierwszy lub drugi argument.\n" );
			exit(11);
		} 
			break;
	}
}

int main(int argc,char *argv[])
{
 	if(argc!=3) //sprawdz czy ilosc argumentow nie jest rowna 3
	{
		printf("Podano niepawidlowa ilosc argumentow!\n");
		printf("Funkcja przyjmuje 2 argumenty: [1..3]-sposob obslugi sygnalu, [x]-numer sygnalu\n");
            	printf("Polecenie kill -l w terminalu wyswietla sygnaly oraz ich numery \n");
		exit(0); //zakoncz
	}

	printf("PID to:%d\n\n",getpid());

	int operacja=atoi(argv[1]);
	int sygnal=atoi(argv[2]);
	
	Signals(operacja, sygnal);
	pause();

}
