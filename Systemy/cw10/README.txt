========================================================================
Autor: Wojciech Sekowski,                               Krakow, 04.06.2019
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


II. Program implementujacy "algorytm piekarni", rozwiązujący wykluczanie się w sekcji krytycznej dla dowolnej N liczby procesów,
    opiera się na przydzielaniu kolejnego numeru w kolejce oczekujących procesow i wpuszczaniu procesu z najniższym numerem
    Sklada sie on z: 
    3) cw10.c - jest to program glowny.


------------------------------------------------------------------------

* Jak uruchomic programy:
=========================

Katalog zawiera program Makefile do kompilacji i uruchamiania powyzszych programow,
a takze do czyszczenia katalogu i jego archiwizacji.

-> Aby uruchomic program serwer, nalezy wykonac komende:
       make runcw10

-> Aby wyczyscic zawartosc katalogu (usunac zbedne pliki), nalezy wykonac:
       make clean

-> W celu archiwizacji oraz kompresji katalogu nalezy wykonac:
       make tar

========================================================================


