========================================================================
Autor: Wojciech Sekowski,                               Krakow, 05.06.2019
========================================================================

* Zawartosc:
============

Katalog zawiera 2 programy, plik naglowkowy w jezyku C wraz z plikiem Makefile oraz plikiem README,
ktory wlasnie czytamy:
--------------------------------------------------------------------

I.  Program, ktory jest biblioteka funkcji dla watkow wraz z plikiem naglowkowym.
    Sklada sie on z: 
    1) biblioteka.c - jest to program glowny.
    2) biblioteka.h - jest to plik naglowkowy 


II. Program, ktory przy pomocy  muteksów implementuje zadanie wzajemnego wykluczania dla wątków. Wątek wykonując swoją sekcję prywatną wypisuje odpowiedni komunikat po lewej stronie okna konsoli, natomiast będąc w sekcji krytycznej drukuje informacje po prawej stronie (w tym samym wierszu). Każdy wątek może kilka razy powtarzać powyższy cykl. 
    3) main.c - jest to program glowny.


------------------------------------------------------------------------

* Jak uruchomic programy:
=========================

Katalog zawiera program Makefile do kompilacji i uruchamiania powyzszych programow,
a takze do czyszczenia katalogu i jego archiwizacji.

-> Aby uruchomic program serwer, nalezy wykonac komende:
       make runcw9 LWatk=x LSekc=y, gdzie

	x=ilosc watkow, ktore chcemy utworzyc
	y=ilosc zadan dla jednego watku

Np.: make runcw9 LWatk=3 LSekc=4

-> Aby wyczyscic zawartosc katalogu (usunac zbedne pliki), nalezy wykonac:
       make clean

-> W celu archiwizacji oraz kompresji katalogu nalezy wykonac:
       make tar

========================================================================


