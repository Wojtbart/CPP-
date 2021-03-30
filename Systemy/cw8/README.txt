========================================================================
Autor: Wojciech Sekowski,                               Krakow, 29.05.2019
========================================================================

* Zawartosc:
============

Katalog zawiera 3 programy, plik naglowkowy w jezyku C wraz z plikiem Makefile oraz plikiem README,
ktory wlasnie czytamy:
--------------------------------------------------------------------

I.  Program, ktory jest biblioteka funkcji dla kolejek komunikatow wraz z plikiem naglowkowym.
    Sklada sie on z: 
    1) biblioteka.c - jest to program glowny.
    2) biblioteka.h - jest to plik naglowkowy 


II. Program serwer, ktory wykonuje odpowiednie działanie przeslane od klientow(moze byc ich wiele) i odsyła wynik do klientow.      Dziala nieprzerwanie az do nacisniecia kombinacji CRTL+C. Implementacja zadania typu klient–serwer z możliwością obslugi przez serwera wielu klientów naraz.
    Sklada sie on z: 
    3) serwer.c - jest to program glowny.

III.Program klient, który wysyła do procesu serwera żądanie wykonania działania arytmetycznego na dwóch liczbach postaci: liczba op 	liczba gdzie operator op należy do zbioru: {+, -, *,  /}.Klient odbiera wynik pracy serwera i wypisuje go na ekranie. 	    	Implementacja zadania typu klient–serwer z możliwością obslugi przez serwera wielu klientów naraz.Dziala nieprzerwanie az do   nacisniecia kombinacji CTRL+D.
    Sklada sie on z: 
    4) klient.c - jest to program glowny.

 

------------------------------------------------------------------------

* Jak uruchomic programy:
=========================

Katalog zawiera program Makefile do kompilacji i uruchamiania powyzszych programow,
a takze do czyszczenia katalogu i jego archiwizacji.

-> Aby uruchomic program serwer, nalezy wykonac komende:
       make runcw8ser

-> Aby uruchomic program klient, nalezy wykonac komende:
       make runcw8kli


-> Aby wyczyscic zawartosc katalogu (usunac zbedne pliki), nalezy wykonac:
       make clean

-> W celu archiwizacji oraz kompresji katalogu nalezy wykonac:
       make tar

========================================================================


