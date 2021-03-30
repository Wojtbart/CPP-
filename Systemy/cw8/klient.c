#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <mqueue.h>
#include <string.h>

#include "biblioteka.h"

#define SCIEZKA "/"

int main( )
{
	mqd_t Klient, Serwer; //deskryptor kolejki komunikatow 
	char bufor[100]; // do nazwy klienta
	char tekst[30];  //do wpisywania dzialania
	char wyslano[30]; //do wysylania na serwer
	char otrzymano[30]; //do odsylania do klienta
	pid_t PID=getpid();

	struct mq_attr attr;
	attr.mq_flags=O_NONBLOCK;
	attr.mq_maxmsg=4;
	attr.mq_msgsize=30;
	attr.mq_curmsgs=0;
		
	sprintf(bufor,"%s%d", SCIEZKA,PID);
	printf("Zaczynamy proces klient!\n");
	printf("PID klienta: %s\n",bufor);
	
	Klient = OtworzKolejkeODB(bufor, &attr);

	Serwer = OtworzKolejkeWYS (NAZWASERWERA, &attr);

	printf("Jakie dzialanie chcesz wykonac: \n");

	while(fgets(tekst, 29, stdin)!=NULL)
	{	
		printf("Wpisano dzialanie: %s\n", tekst);

		sprintf(wyslano, "%d %s", PID, tekst);
		printf("Wyslalismy komunikat: %s\n", wyslano);
		WyslijKomunikat(Serwer,wyslano, 30,1);
		
		OdbierzKomunikat(Klient, &otrzymano, 30, 0);
		printf("Otrzymalismy komunikat: %s\n", otrzymano);

		printf("Jakie nastepne dzialanie chcesz wykonac: ");
	}

	printf("Koniec procesu klient!\n");

	ZamknijKolejke(Klient);
	UsunKolejke(bufor);
 	ZamknijKolejke(Serwer);

 return 0;
}
