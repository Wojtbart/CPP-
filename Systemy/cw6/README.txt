========================================================================
Autor: Wojciech Sekowski,                               Krakow, 26.04.2019 
========================================================================

* Zawartosc:
============

Katalog zawiera 3 programy w jezyku C wraz z plikiem naglowkowym(.h), plikiem Makefile oraz plik README,
ktory wlasnie czytamy:
--------------------------------------------------------------------

I.  Program, który za pomoca semaforów nazwanych standardu POSIX implementuje zadanie wzajemnego wykluczania
    dla procesów.
    Sklada sie on z: 
    1) glowny.c - jest to  specjalny program do powielania procesów realizujących wzajemne wykluczanie – w
    oparciu o funkcje fork i exec.

    2) powielacz.c - jest to program odpalany przez glowny.c,przy pomocy odpowiednich komunikatów wypisywanych
    przez poszczególne procesy przed, w trakcie i po sekcji krytycznej oraz funkcji podającej wartość semafora
    demonstrujemy poprawnosc dzilania programu.

    Biblioteka(program) prostych w użyciu funkcji do: tworzenia, otwierania, uzyskiwania wartości, operowania,
    zamykania i usuwania semafora.
    3) biblioteka.c 
    4) biblioteka.h - jest to plik naglowkowy.

------------------------------------------------------------------------

* Jak uruchomic programy:
=========================

Katalog zawiera program Makefile do kompilacji i uruchamiania powyzszych programow,
a takze do czyszczenia katalogu i jego archiwizacji.

-> Aby uruchomic 1 program, nalezy wykonac komende:
       make runcw6 LProc=x LSekc=y,   gdzie
	x - liczba procesow
	y - liczba sekcji krytycznych
	

-> Aby wyczyscic zawartosc katalogu , nalezy wykonac:
       make clean

-> W celu archiwizacji oraz kompresji katalogu nalezy wykonac:
       make tar

========================================================================

