========================================================================
Autor: Wojciech Sekowski,                               Krakow, 31.03.2019
========================================================================

* Zawartosc:
============

Katalog zawiera 3 programy w jezyku C wraz z plikiem Makefile oraz plikiem README,
ktory wlasnie czytamy:
-----------------------------------------------------------------------------------

I.  Program, ktory ma 3 mozliwosci: (1) wykonania operacji domyślnej, (2) ignorowania oraz (3) przechwycenia i własnej
    obsługi sygnału.Gdy uruchomimy nasz
    program to oczekuje on na sygnal.
    Sklada sie on z: 
    1) 3a.c - jest to program glowny. 

II. Program, ktory uruchamia program 3a.c poprzez funkcje exec w procesie potomnym innego procesu i wysła do niego sygnały
    przez funkcje systemowa kill z procesu macierzystego. 
    Sklada sie on z: 
    1) 3b.c - jest to program glowny.

III.Program, który w procesie macierzystym tworzy proces potomny i sprawa, że proces ten staje się liderem nowej grupy
    procesów, a następnie uruchamia w nim kilka procesów potomnych wykonujących program do obsługi sygnałów. Z pierwszego
    procesu macierzystego wysyła sygnały do całej grupy procesów potomnych. Proces będący liderem grupy procesów ignoruje
    sygnały, a na końcu czeka na zakończenie wszystkich swoich procesów potomnych i wypisuje ich status zakończenia
    zwracany przez funkcję wait.
    Sklada sie on z: 
    1) 3c.c - jest to program glowny.

--------------------------------------------------------------------------------------

* Jak uruchomic programy:
=========================

Katalog zawiera program Makefile do kompilacji i uruchamiania powyzszych programow,
a takze do czyszczenia katalogu i jego archiwizacji.


-> Aby uruchomic 1 program, nalezy wykonac komende:
       make run3a  Oper=1argument Sygn=2argument  

Objaśnienia: 

	1argument to numer operacji od 1 do 3, gdzie:
	     1-obsluga domyslna sygnalu
	     2-ignorowanie sygnalu
	     3-operacja zdefiniowana przez uzytkownika

	2argument to numer sygnalu, ktore mozemy sprawdzić poleceniem kill -l w terminalu
	     	  
-> Aby uruchomic 2 program, nalezy wykonac komende:
       make run3b Oper=1argument Sygn=2argument

-> Aby uruchomic 3 program, nalezy wykonac komende:
       make run3c Oper=1argument Sygn=2argument

-> Aby wyczyscic zawartosc katalogu (usunac zbedne pliki), nalezy wykonac:
       make clean

-> W celu archiwizacji oraz kompresji katalogu nalezy wykonac:
       make tar

========================================================================
