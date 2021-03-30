========================================================================
Autor: Wojciech Sekowski,                               Krakow, 19.03.2019
========================================================================

* Zawartosc:
============

Katalog zawiera 1 program w jezyku C wraz z plikiem Makefile oraz plikiem README,
ktory wlasnie czytamy:
--------------------------------------------------------------------

I. Program, ktory wywoluje funkcję fork trzy razy w pętli for i wypisuje identyfikatory UID,
    GID, PID, PPID i PGID. Identyfikatory procesów potomnych sa wypisywane przez program uruchamiany przez 
    funkcję exec.
    Sklada sie on z 2 plikow: 

    1) cw2.c - jest to program glowny.
    2) Identyfikatory.c - jest to program, ktory wypisuje identyfikatory UID, GID, PID, PPID i PGID.

------------------------------------------------------------------------

* Jak uruchomic programy:
=========================

Katalog zawiera program Makefile do kompilacji i uruchamiania powyzszych programow,
a takze do czyszczenia katalogu i jego archiwizacji.


-> Aby uruchomic  program, nalezy wykonac komende:
       make runzad2


-> Aby wyczyscic zawartosc katalogu (usunac zbedne pliki), nalezy wykonac:
       make clean

-> W celu archiwizacji oraz kompresji katalogu nalezy wykonac:
       make tar

========================================================================

* Odpowiedzi na pytania z zadania:


-Ile procesów powstanie przy n-krotnym wywołaniu funkcji fork-exec jak wyżej i dlaczego?

Przy n-krotnym wywoaniu funkcji fork-exec powstanie n procesow, poniewaz gdy wywolujemy funkcje np 3 razy w petli to powstanie 3 procesy, gdyz kazdy juz stworzony proces zastepujemy nowym programem, exec nie tworzy nowych procesow tak jak fork, jeli by wliczyc proces macierzysty to mamy n+1 procesow.



