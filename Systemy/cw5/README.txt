========================================================================
Autor: Wojciech Sekowski,                               Krakow, 17.04.2019 
========================================================================

* Zawartosc:
============

Katalog zawiera 3 programy w jezyku C wraz z plikiem Makefile, 1 plik tekstowy(wejscie.txt) oraz plik README,
ktory wlasnie czytamy:
--------------------------------------------------------------------

I.  Program, ktory tworzy potok FIFO z poziomu programu, a nastepnie uruchamia procesy Producenta i Konsumenta w tym samym 
    programie, w procesie macierzystym i potomnym.
    Sklada sie on z: 
    1) cw5.c - jest to program glowny. 

II. Program Producent, ktory produkuje towar.
    Sklada sie on z: 
    1) producent.c - jest to program glowny.

III.Program Konsument, ktory konsumuje towar.
    Sklada sie on z: 
    1) konsument.c - jest to program glowny. 

IV. Programy glowny wczytuje dane(tekst) z pliku wejscie.txt oraz tworzy plik wyjscie.txt, gdzie zapisuje dane.

------------------------------------------------------------------------

* Jak uruchomic programy:
=========================

Katalog zawiera program Makefile do kompilacji i uruchamiania powyzszych programow,
a takze do czyszczenia katalogu i jego archiwizacji.

-> Aby uruchomic 1 program, nalezy wykonac komende:
       make runcw5

-> Aby uruchomic program Producent, nalezy wykonac komende:
       make runproduc

-> Aby uruchomic program Konsument, nalezy wykonac komende:
       make runkonsum

-> Aby stworzyc potok, nalezy wykonac komende:
       make runPOTOK

-> Aby uruchomic program Konsument, Producent w nowym terminalu oraz utworzyc potok, nalezy wykonac komende:
       make runPOTOK

-> Aby wyczyscic zawartosc katalogu (usunac zbedne pliki, w tym usuwanie potoku i pliku wyjscie.txt), nalezy wykonac:
       make clean

-> W celu archiwizacji oraz kompresji katalogu nalezy wykonac:
       make tar

========================================================================

