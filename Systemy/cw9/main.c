#include <stdio.h> 
#include <pthread.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include "biblioteka.h"

//Deklaracja mutexa o nazwie myMutex i jego wartosc to 0
pthread_mutex_t myMutex = PTHREAD_MUTEX_INITIALIZER;

//Zmienna globalna licznik; ilosc watkow; ile razy wykonac zadanie w watku;
int licznik_glob=0;
int IloscWatkow;
int IleRazy;	

/*
  =========================================================================
  Ustawienie pozycji kursora w punkcie o wspolrzednych (x,y) na ekranie,
  gdzie x - liczba kolumn (od lewej), y - liczba wierszy (od gory).
  Sekwencja \033[2K powoduje wymazanie poprzedniego napisu w danym wierszu.
  =========================================================================
*/
void gotoxy(unsigned x, unsigned y)
{
  printf("\033[%d;%dH\033[2K", y, x);
}


void *start_fun(int watek)
{
	int i, licznik_pryw;
	
	for(i=0; i<IleRazy; i++)
	{
		//pokazuje ktory watek pracuje
		gotoxy(1,9);
		printf("Numer watku to: %d \n",watek+1);
	
	
	//Sekcja prywatna
	gotoxy(1, watek*2+1);
	printf("Znajdujemy sie w sekcji prywatnej!\n");	
	sleep(2);

	//Zamknij muteks
	Zamknij_muteksLOCK(&myMutex);

	//Przypisuje licznik globalny licznikowi lokalnemu,zwiekszam o 1 i przypisuje lokalnemu globalny
	gotoxy(40, watek*2+1);

	printf("Znajdujemy sie w sekcji krytycznej!\n");

	licznik_pryw=licznik_glob;
	licznik_pryw++;
	sleep(1.5);
	licznik_glob=licznik_pryw;

	//Otworz muteks
	Otworz_muteks(&myMutex);


	//Po zakonczeniu sekcji krytycznej
	gotoxy(1, watek*2+1);
	printf("Znajdujemy sie w sekcji prywatnej!\n");
	}
	sleep(1.5);
}


int main(int argc, char *argv[])
{
	int i;	

	if(argc!=3)
	{
		perror("Nieprawidlowa ilosc argumentow");
		exit(1);
	}

//Czyszczenie ekranu
	printf("\e[1;1H\e[2J");

//Inicjuje muteks
	Inicjuj_muteks(&myMutex, NULL);

//ilosc watkow, numer watkow jako 2 i 3 argument
	IloscWatkow=atoi(argv[1]);
	IleRazy=atoi(argv[2]);

//ID (ilosc)watkow
		pthread_t pthreadID[IloscWatkow];

//Tworze watki
	for(i=0; i<IloscWatkow; i++)
	{	
		Stworz_watek(&pthreadID[i], NULL, start_fun,i);	

	}

//Czekam na zakonczenie watkow, brak informacji o stanie
	for(i=0; i<IloscWatkow; i++)
	{	
		Czekaj_na_zakonczenie(pthreadID[i],NULL);	

	}

//Usuwam muteks
	Usun_muteks(&myMutex);

//Sprawdzam poprawnosc dzialania
	gotoxy(1,10);
	printf("\nSpodziewana przez nasz wartosc licznika to: %d\n\n",IloscWatkow*IleRazy);
	printf("Koniec!\nWartosc licznika globalnego to: %d\n", licznik_glob);

		return 0;
}

