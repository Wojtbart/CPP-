#include <stdio.h>
#include <pthread.h>
#include <unistd.h>
#include <string.h>
#include "biblioteka.h"

#define n 15

//definiuje zmienna wyliczeniowa do typu bool
typedef enum { false, true } bool;

//zmienne globalne
bool wybieranie[n];
int numer[n];


//blokuj watki
void blokuj(int i)
{
	int k;

	wybieranie[i]=true;
	
	int max_wybor=0;
	//szukaj najwiekszej wartosci sposrod watkow
	for(k=0; k<n; k++)
	{
		int wybor=numer[k];
		if(wybor>max_wybor) max_wybor=wybor;
		else max_wybor=max_wybor;
	}
	//przypisuje numerowi max+1
	numer[i]=1+max_wybor;

	wybieranie[i]=false;

	//Poczatek sekcji wejsciowej
	int j;
	for(j=0; j<n; j++)
	{ 		//czekaj a proces j dostanie swoj numer
		while(wybieranie[j])
			{/*Nie robie nic*/} 
				/* Czekaj na wszystkie procesy z numerami mniejszymi, badz rownymi,
     			 	ale z wyzszym priorytetem, az się zakoncza:*/
		while( (numer[j]!=0) && ( (numer[j]<numer[i]) || (numer[j]==numer[i] && j<i) ) )
			{/*Nie robie nic*/}
	}

}

//odblokuj, zakoncz sekcje 
void odblokuj(int i)
{
	numer[i]=0;
}

//sekcja krytyczna
 int zasob;

void uzyj_zasob(int i)
{
	
	if (zasob!=0) printf("Zasob zostal pozyskany przez %d proces, lecz jest nadal uzywany przez watek!\n", zasob);

	zasob=i;
	printf("Proces %d uzyskal zasob!\n", i);
	sleep(1.5);
	zasob=0;
}

//funkcja pokazujaca dzialanie programu
void cialo_watku(int argument)
{
	int watek=argument;
	blokuj(watek);
	uzyj_zasob(watek);
	odblokuj(watek);
}

int main() 
{ 

	int k;
	//tablica wypelniona zerami
	for(k=0; k<n; k++)
	{
		numer[k]=0;
	}

	//tablica wypelniona wartoscia false
	memset(&wybieranie, false, sizeof(bool) * n);

	zasob=0;
		
	//Id n watkow
	pthread_t pthreadID[n];

	//Tworze watki
	for(k=0; k<n; k++)
	{	
		Stworz_watek(&pthreadID[k], NULL, cialo_watku,k);	//czy tutaj 0?

	}
	//Czekam na zakonczenie watkow, brak informacji o stanie
	for(k=0; k<n; k++)
	{	
		Czekaj_na_zakonczenie(pthreadID[k],NULL);	

	}
  
    return 0;
}
