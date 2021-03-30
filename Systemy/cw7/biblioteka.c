#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <semaphore.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include "biblioteka.h"

//Semafory

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


void Stworz_SemaforNazwany(const char *nazwa , unsigned int value)
{
	sem_t *semafor;
	semafor=sem_open(nazwa, O_CREAT| O_EXCL, 0777, value);

	if(semafor==SEM_FAILED)
	{
		perror("Blad przy tworzeniu lub otwarciu semafora nazwanego!\n");
		exit(2);
	}	
}

sem_t* Otworz_SemaforNazwany(const char *nazwa)
{
	sem_t *semafor;
	semafor=sem_open(nazwa, 0);
	if(semafor==SEM_FAILED)
	{
		perror("Blad przy tworzeniu lub otwarciu semafora nazwanego!\n");
		exit(3);
	}
	return semafor;
}

int Podnies_Semafor(sem_t *semafor )
{
	if(sem_post(semafor)==-1)
	{
		perror("Blad przy podnoszeniu semafora!\n");
		exit(4);
	}
}


int Opusc_Semafor(sem_t *semafor)
{
	if(sem_wait(semafor)==-1)
	{
		perror("Blad przy opuszczeniu semafora!\n");
		exit(5);
	}
}


int Zamknij_SemaforNazwany(sem_t *semafor)
{
	if(sem_close(semafor)==-1)
	{
		perror("Blad przy zamykaniu semafora nazwanego!\n");
		exit(6);
	}	
}


int Usun_SemaforNIEnazwany(sem_t *semafor)
{
	if(sem_destroy(semafor)==-1)
	{
		perror("Blad przy usuwaniu semafora nienazwanego!\n");
		exit(7);
	}	
}
int Usun_SemaforNazwany(const char *nazwa)
{
	if(sem_unlink(nazwa)==-1)
	{
		perror("Blad przy usuwaniu semafora nazwanego!\n");
		exit(8);
	}	
}



int Info_Wartosc_Semafora(sem_t *semafor, int sval)
{
	if(sem_getvalue(semafor,&sval)==-1)
	{
		perror("Bledne informacje o  semaforze!\n");
		exit(9);
	}
}

//Pamiec dzielona

int Otworz_obiekt(const char *nazwa)
{
	int obiekt=shm_open(nazwa, O_CREAT | O_EXCL | O_RDWR, 0777);
	if(obiekt==-1)
	{
		perror("Blad przy tworzeniu/otwarciu obiektu pamieci dzielonej!\n");
		exit(10);
		
	}
} 

int Ustaw_rozmiar(int filedes, size_t length)
{
	int obiekt=ftruncate(filedes, length);
	if(obiekt==-1)
	{
		perror("Wystapil blad przy tworzeniu rozmiaru obiekt pamieci dzielonej!\n");
		exit(11);
	}
}

int Zamknij_obiekt(int filedes)
{
	if(close(filedes)==-1)
	{
		perror("Wystapil blad przy zamykaniu obiektu pamieci dzielonej!\n");
		exit(12);
	}
}

int Usun_obiekt(const char *nazwa)
{
	if(shm_unlink(nazwa)==-1)
	{
		perror("Wystapil blad przy usuwaniu obiektu pamieci dzielonej!\n");
		exit(13);
	}
}



int Usun_odwzorowanie(void *addr, size_t length)
{
	if(munmap(addr,length)==-1)
	{
		perror("Blad przy usuwaniu odwzorowania!\n");
		exit(14);
	}	
}

