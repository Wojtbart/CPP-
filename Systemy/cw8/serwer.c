#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <mqueue.h>
#include <string.h>

#include <signal.h>
#include <sys/types.h>

#include "biblioteka.h"

#define SCIEZKA "/"

mqd_t Serwer, Klient;  //deksryptory

void my_sighandler(int signal)
{
	printf("\nFunkcja przechwytuje sygnal! %d\n", signal);
	printf("Koncze prace serwera!\n");
	ZamknijKolejke(Serwer);
	UsunKolejke(NAZWASERWERA);
	exit(0); //zakoncz proces
}

int main()
{
	char bufor[100]; //do nazwy klienta
	char dzialanie[30]; //do odbierania przez serwer
	char wysylanie[30]; //do odsylania do klienta
	
	int i;
	float liczba1, liczba2, wynik; //do liczenia
	char znak; 
	char pid[10];

	struct mq_attr attr;
	attr.mq_flags=O_NONBLOCK;
	attr.mq_maxmsg=4;
	attr.mq_msgsize=30;
	attr.mq_curmsgs=0;

	if(signal(SIGINT,my_sighandler)==SIG_ERR)
	{
		perror("Wystapil problem z przechwyceniem sygnalu!\n");
		exit(1);
	}

	printf("Zaczynamy proces serwer!\n");
	printf("Nasz serwer to :%s\n",NAZWASERWERA);

	Serwer = OtworzKolejkeODB(NAZWASERWERA, &attr);

	while(1)
	{
		
		OdbierzKomunikat(Serwer,&dzialanie,30,0);
		printf("Serwer odebral dzialanie: %s\n", dzialanie);

		for(i=0; i<4; i++)
		{
			pid[i]=dzialanie[i];
		}
			pid[4]='\0'; //tutaj i powyzej odczytuje pid
		
		sscanf(dzialanie," %s %f %c %f ", pid, &liczba1, &znak, &liczba2);
		
		sprintf(bufor,"%s%s", SCIEZKA, pid);
		printf("PID naszego klienta to: %s\n",bufor);

		Klient= OtworzKolejkeWYS(bufor, NULL);
		printf("Serwer wykonuje zadane dzialanie!\n");

		if(znak=='+')
		{
			wynik=liczba1+liczba2;
		}
		if (znak=='-')
              	{
                       wynik=liczba1-liczba2;

                }
                if (znak=='*')
                {
                       wynik=liczba1*liczba2;
                }
                if(znak=='/')
                {      	
                 	if (liczba2 == 0)
                  	{
                                    printf("Nie mozna dzielic przez 0!\n");
                                    wynik=0; //zwraca 0 gdy blad
                  	}
                       else wynik=liczba1/liczba2;
                }
		printf("Wynik naszego dzialania to: %f\n", wynik); 
		sprintf(wysylanie,"%.2f",wynik);
		printf("Wyslany komunikat to: %s\n", wysylanie);

		WyslijKomunikat(Klient,wysylanie,30,1);
		ZamknijKolejke(Klient);
		
	}
	
	ZamknijKolejke(Serwer);
	UsunKolejke(NAZWASERWERA);
	
return 0;

}
