========================================================================
Autor: Wojciech Sekowski,                               Krakow, 28.05.2019 
========================================================================

* Zawartosc:
============

Katalog zawiera 2 program w jezyku C wraz z plikiem naglowkowym(.h), plikiem Makefile, plikiem wejscie.txt oraz plik README,
ktory wlasnie czytamy:
--------------------------------------------------------------------

I.  Program który przy pomocy pamięci dzielonej i semaforów implementuje problem "konsumenta-producenta".
    Sklada sie on z: 
    1) main.c 

    Biblioteka (program) statyczna oraz dynamiczna prostych w użyciu funkcji odnosnie pamieci dzielonej i semaforow wraz z obsluga 	bledow.
    Sklada sie z:

    2) biblioteka.c 
    3) biblioteka.h - jest to plik naglowkowy.

------------------------------------------------------------------------

* Jak uruchomic programy:
=========================

Katalog zawiera program Makefile do kompilacji i uruchamiania powyzszych programow,
a takze do czyszczenia katalogu i jego archiwizacji.

-> Aby uruchomic 1 program(z biblioteka statyczna) i sprawdzic czy pliki sa podobne, nalezy wykonac komende:
       make runcw7s

-> Aby uruchomic 2 program(z biblioteka dynamiczna) i sprawdzic czy pliki sa podobne, nalezy wykonac komende:
       make runcw7d

-> Aby wyczyscic zawartosc katalogu , nalezy wykonac:
       make clean

-> W celu archiwizacji oraz kompresji katalogu nalezy wykonac:
       make tar

========================================================================

PSEUDOKOD:

#define N ? // Rozmiar bufora

typdef struct { ... } Towar; // Definicja typu dla jednostek towaru

Towar bufor[N]; // Bufor mogacy pomiescic N jednostek towaru

int wstaw = 0, wyjmij = 0; // Pozycje wstawiania oraz wyjmowania towaru
// z bufora (mozna umiescic w pamieci dzielonej)

semaphore SEM = 1; // Semafor do wstrzymywania Producenta i Konsumenta

// Procesy Producentów
// ----------------

Towar towarProd;
while (1) {
// Produkcja towaru
P(SEM); // Opusc semafor
bufor[wstaw] = towarProd; // Umiesc towar w buforze
wstaw = (wstaw + 1) % N; // Przesun pozycje wstawiania o 1 dalej
V(SEM); // Podniesc semafor
}

// Procesy Konsumentów
// ----------------

Towar towarKons;
while (1) {
P(SEM); // Opusc semafor
towarKons = bufor[wyjmij]; // Weź towar z bufora
wyjmij = (wyjmij + 1) % N; // Przesun pozycje wstawiania o 1 dalej
V(SEM); // Podniesc semafor
// Konsumpcja towaru
}

