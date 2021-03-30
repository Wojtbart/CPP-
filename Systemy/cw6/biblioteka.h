#ifndef _BIBLIOTEKA_H
#define _BIBLIOTEKA_H
#include <semaphore.h>

int Inicjuj_SemaforNIEnazwany( );
sem_t* Stworz_SemaforNazwany();

int Podnies_Semafor();
int Opusc_Semafor();

int Zamknij_SemaforNazwany();
int Usun_SemaforNIEnazwany( );
int Usun_SemaforNazwany( );

int Info_Wartosc_Semafora( );

#endif
