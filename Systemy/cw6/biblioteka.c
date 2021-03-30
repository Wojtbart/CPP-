#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <fcntl.h>
#include <sys/stat.h>
#include "biblioteka.h"

int Inicjuj_SemaforNIEnazwany(sem_t *semafor , int pshared , unsigned int value)
{
	pshared=0;
	int pomocnicza;
	pomocnicza=sem_init(semafor,pshared,value);
	
	if(pomocnicza==-1)
	{
		perror("Blad przy inicjowaniu semafora nienazwanego!\n");
		exit(1);
	}
}


sem_t* Stworz_SemaforNazwany(const char *nazwa , unsigned int value)
{
	sem_t *semafor;
	semafor=sem_open(nazwa, O_CREAT, 0777, value);

	if(semafor==SEM_FAILED)
	{
		perror("Blad przy tworzeniu lub otwarciu semafora nazwanego!\n");
		exit(2);
	}
	return semafor;		
}

int Podnies_Semafor(sem_t *semafor )
{
	if(sem_post(semafor)==-1)
	{
		perror("Blad przy podnoszeniu semafora!\n");
		exit(3);
	}
}


int Opusc_Semafor(sem_t *semafor)
{
	if(sem_wait(semafor)==-1)
	{
		perror("Blad przy opuszczeniu semafora!\n");
		exit(4);
	}
}


int Zamknij_SemaforNazwany(sem_t *semafor)
{
	if(sem_close(semafor)==-1)
	{
		perror("Blad przy zamykaniu semafora nazwanego!\n");
		exit(5);
	}	
}


int Usun_SemaforNIEnazwany(sem_t *semafor)
{
	if(sem_destroy(semafor)==-1)
	{
		perror("Blad przy usuwaniu semafora nienazwanego!\n");
		exit(6);
	}	
}
int Usun_SemaforNazwany(const char *nazwa)
{
	if(sem_unlink(nazwa)==-1)
	{
		perror("Blad przy usuwaniu semafora nazwanego!\n");
		exit(6);
	}	
}



int Info_Wartosc_Semafora(sem_t *semafor, int sval)
{
	if(sem_getvalue(semafor,&sval)==-1)
	{
		perror("Bledne informacje o  semaforze!\n");
		exit(7);
	}
}

