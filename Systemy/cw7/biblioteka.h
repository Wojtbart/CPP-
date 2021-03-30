#ifndef _BIBLIOTEKA_H
#define _BIBLIOTEKA_H
#include <semaphore.h>

int Inicjuj_SemaforNIEnazwany( );
void Stworz_SemaforNazwany();
sem_t* Otworz_SemaforNazwany();

int Podnies_Semafor();
int Opusc_Semafor();

int Zamknij_SemaforNazwany();
int Usun_SemaforNIEnazwany( );
int Usun_SemaforNazwany( );

int Info_Wartosc_Semafora( );

int Otworz_obiekt();
int Ustaw_rozmiar();

int Zamknij_obiekt();
int Usun_obiekt();

int Usun_odwzorowanie();


#endif
