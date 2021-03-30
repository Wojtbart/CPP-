DIR = `basename $(PWD)`

.PHONY: run3a run3b run3c 
run3a: 3a.c
	gcc -o CW3a.o 3a.c
	./CW3a.o ${Oper} ${Sygn} 
run3b: 3b.c
	gcc -o CW3a.o 3a.c
	gcc -o CW3b.o 3b.c
	./CW3b.o ${Oper} ${Sygn} 
run3c: 3c.c
	gcc -o CW3a.o 3a.c
	gcc -o CW3c.o 3c.c
	./CW3c.o ${Oper} ${Sygn} 

#Sprzataczka	
.PHONY: clean tar
clean:                                                     
	rm -f *.o *.x
tar: clean
	(cd ../; tar -cvzf $(DIR).tar.gz  $(DIR) )
