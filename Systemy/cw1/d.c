#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>


int main()
{
	int i;

	FILE *fp; //wskaznik na typ FILE

	if ((fp = fopen("Drzewo.txt", "w")) == NULL) //sprawdzamy czy udalo sie otworzyc plik
	{
		printf("Nie udalo sie otworzyć pliku Drzewo.txt do zapisu!\n");
		exit(1); //zakoncz gdy nie udalo sie otworzyc
	}
	fprintf(fp, "PID: %d\tPPID: %d\tPGID: %d\t", getpid(), getppid(), getpgrp());  // zapisz nasz łańcuch w pliku
	fclose(fp); // zamknij nasz plik


	printf("\n");
	printf("PID to: %d\n", getpid());
	printf("PPID to: %d\n", getppid());
	printf("PGID to: %d\n", getpgrp());

	int x = 0; //zmienna potrzeban do zapisu w pliku

	for (i = 1; i <= 3; i++)
	{
		switch (fork())
		{
		case -1:
			perror("FORK ERROR!"); //blad
			exit(1); //koniec programu gdy jest blad

		case  0: //tworzenie potomka
			x = 0;
			sleep(1.5);

			fp = fopen("Drzewo.txt", "a+");
			fprintf(fp, "PID: %d\tPPID: %d\tPGID: %d\t\t", getpid(), getppid(), getpgrp());  // zapisz nasz łańcuch w pliku
			fclose(fp); // zamknij nasz plik

			sleep(1.5);

			printf("\n");
			printf("PID to: %d\n", getpid());
			printf("PPID to: %d\n", getppid());
			printf("PGID to: %d\n", getpgrp());

			break;  //koniec potomka

		 default:
			fp = fopen("Drzewo.txt", "a+");
			if (++x == 1)fprintf(fp, "\n\n");  // zapisz nasz łańcuch w pliku
			fclose(fp); // zamknij nasz plik
			break;
		};

	}
	sleep(3 * i + 1); //usypia matke na okreslona ilosc sekund+1 sekunda rezerwy(dzieci spia w sumie 3 sekundy)



	return 0;
}
