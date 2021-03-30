#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include "biblioteka.h"


int Stworz_watek(pthread_t *pthreadID, const pthread_attr_t *attr, void * (*start_fun)(void *), void *arg)
{
	int watek;
	watek=pthread_create(pthreadID, attr, start_fun, arg);
	if(watek!=0)
	{
		perror("Blad przy tworzeniu watku!\n");
		exit(1);
	}
	return watek;
} 


int Czekaj_na_zakonczenie(pthread_t threadID, void **status)
{
	int watek;
	watek=pthread_join(threadID, status);
	if(watek!=0)
	{
		perror("Blad przy czekaniu na zakonczenie watku!\n");
		exit(2);
	}
	return watek;
}

int Odlacz_watek(pthread_t threadID)
{
	int watek;
	watek=pthread_detach(threadID);
	if(watek!=0)
	{
		perror("Blad przy odlaczaniu watku!\n");
		exit(3);
	}
	return watek;	
}

int Inicjuj_muteks(pthread_mutex_t *pmutex, const pthread_mutexattr_t *attr)
{
	int watek;
	watek=pthread_mutex_init(pmutex, attr);
	if(watek!=0)
	{
		perror("Blad przy inicjacji muteksu");
		exit(4);
	}
	return watek;
}

int Otworz_muteks(pthread_mutex_t *pmutex)
{
	int watek;
	watek=pthread_mutex_unlock(pmutex);
	if(watek!=0)
	{
		perror("Blad przy zamykaniu muteksu!\n");
		exit(5);
	}
	return watek;
}

int Zamknij_muteksTRYLOCK(pthread_mutex_t *pmutex)
{
	int watek;
	watek=pthread_mutex_trylock(pmutex);
	if(watek!=0)
	{
		perror("Blad przy zamykaniu muteksu!\n");
		exit(6);
	}
	return watek;
}

int Zamknij_muteksLOCK(pthread_mutex_t *pmutex)
{
	int watek;
	watek=pthread_mutex_lock(pmutex);
	if(watek!=0)
	{
		perror("Blad przy zamykaniu muteksu!\n");
		exit(7);
	}
	return watek;
}

int Usun_muteks(pthread_mutex_t *pmutex)
{
	int watek;
	watek=pthread_mutex_destroy(pmutex);
	if(watek!=0)
	{
		perror("Blad przy zamykaniu muteksu!\n");
		exit(8);
	}
	return watek;
}


