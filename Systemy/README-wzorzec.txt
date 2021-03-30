========================================================================
Autor: Wojciech Sekowski,                               Krakow, 13.03.2019
========================================================================

* Zawartosc:
============

Katalog zawiera 5 programow w jezyku C wraz z plikiem Makefile oraz plikiem README,
ktory wlasnie czytamy:
--------------------------------------------------------------------

I.  Program, ktory wypisuje identyfikatory UID, GID, PID, PPID, PGID dla danego procesu.
    Sklada sie on z: 
    1) a.c - jest to program glowny. 


II. Program, ktory wywoluje funkcję fork trzy razy w pętli for i wypisuje identyfikatory UID,
    GID, PID, PPID i PGID dla procesu macierzystego oraz wszystkich procesów potomnych.
    Program przy pomocy funkcji wait sprawia, aby proces macierzysty zaczekał na zakończenie 
    wszystkich procesów potomnych.
    Sklada sie on z: 
    1) b.c - jest to program glowny.

III.Program, który sprawia, że przy użyciu funkcji sleep  procesy potomne są adoptowane przez
    proces init(nie wykorzystuje funkcji wait).
    Sklada sie on z: 
    1) c.c - jest to program glowny.

IV. Program, w którym procesy pojawiają się na ekranie grupowane pokoleniami od najstarszego do
    najmłodszego (dzieki funkcji sleep), a proces macierzysty kończy się dopiero po procesach
    potomnych. Na podstawie danych wyników program sporządza (w pliku tekstowym "Drzewo.txt") 
    ,,drzewo genealogiczne” tworzonych procesów z zaznaczonymi identyfikatorami PID, PPID i PGID.
    Sklada sie on z: 
    1) d.c - jest to program glowny.

V.  Program, który przy użyciu funkcji setpgid sprawia, ze każdy proces potomny staje się liderem
    swojej własnej grupy procesów.
    Sklada sie on z: 
    1) e.c - jest to program glowny. 

------------------------------------------------------------------------

* Jak uruchomic programy:
=========================

Katalog zawiera program Makefile do kompilacji i uruchamiania powyzszych programow,
a takze do czyszczenia katalogu i jego archiwizacji.


-> Aby uruchomic 1 program, nalezy wykonac komende:
       make run1a

-> Aby uruchomic 2 program, nalezy wykonac komende:
       make run1b

-> Aby uruchomic 3 program, nalezy wykonac komende:
       make run1c

-> Aby uruchomic 4 program, nalezy wykonac komende:
       make run1d

-> Aby uruchomic 5 program, nalezy wykonac komende:
       make run1e

-> Aby wyczyscic zawartosc katalogu (usunac zbedne pliki), nalezy wykonac:
       make clean

-> W celu archiwizacji oraz kompresji katalogu nalezy wykonac:
       make tar

========================================================================

* Odpowiedzi na pytania z zadania:


-Ile procesów powstanie przy n-krotnym wywołaniu funkcji fork i dlaczego?
Przy n-krotnym wywołaniu funkcji fork powstanie 2^n procesow, poniewaz funkcja fork sluzy
tworzenia nowego procesu będącego kopią procesu wywołującego daną funkcje, zatem gdy mamy jeden proces macierzysty i uzyjemy funkcji fork to w wyniku dostaniemy 2 procesy, gdy bedziemy miec 2 procesy macierzyste to w wyniku dostaniemy 4 procesy itd.


