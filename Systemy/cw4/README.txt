========================================================================
Autor: Wojciech Sekowski,                               Krakow, 10.04.2019 
========================================================================

* Zawartosc:
============

Katalog zawiera  program w jezyku C wraz z plikiem Makefile, 2 pliki tekstowe(wejscie.txt i wyjscie.txt) oraz plik README,
ktory wlasnie czytamy:
--------------------------------------------------------------------

I.  Program, ktory przypomocy potoków nienazwanych systemu UNIX rozwiazuje problem,,Producenta i konsumenta”.Producent
 pobiera ,,surowiec” ( porcje bajtów) z pliku tekstowego wejscie.txt i wstawia go jako towar do potoku, a Konsument umieszcza
 pobrany z potoku towar w innym pliku tekstowym wyjscie.txt.Po zakoczenie dzialania programow oba pliki powinny byc
 identyczne.
    Sklada sie on z: 
    1) cw4.c - jest to program glowny. 

------------------------------------------------------------------------

* Jak uruchomic programy:
=========================

Katalog zawiera program Makefile do kompilacji i uruchamiania powyzszych programow,
a takze do czyszczenia katalogu i jego archiwizacji.

-> Aby uruchomic 1 program, nalezy wykonac komende:
       make run4

-> Aby wyczyscic zawartosc katalogu (usunac zbedne pliki), nalezy wykonac:
       make clean

-> W celu archiwizacji oraz kompresji katalogu nalezy wykonac:
       make tar

========================================================================

