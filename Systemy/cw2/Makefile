DIR = `basename $(PWD)`

.PHONY: runzad2
runzad2: cw2.c Identyfikatory.c
	gcc -o Identyfikatory.o Identyfikatory.c
	gcc -o cw2.o cw2.c
	./cw2.o Identyfikatory.o

#Sprzataczka	
.PHONY: clean tar
clean:                                                     
	rm -f *.o  *.x
tar: clean
	(cd ../; tar -cvzf $(DIR).tar.gz  $(DIR) )
