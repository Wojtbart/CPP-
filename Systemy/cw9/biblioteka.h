#ifndef BIBLIOTEKA_H_
#define BIBLIOTEKA_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include "biblioteka.h"

int Stworz_watek();

int Czekaj_na_zakonczenie();

int Odlacz_watek();

int Inicjuj_muteks();
int Otworz_muteks();

int Zamknij_muteksTRYLOCK();
int Zamknij_muteksLOCK();
int Usun_muteks();

#endif
