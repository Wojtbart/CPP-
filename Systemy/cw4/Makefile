DIR = `basename $(PWD)`

.PHONY: run4 
run4:
	gcc -o cwicz4.o cwicz4.c
	./cwicz4.o wejscie.txt wyjscie.txt 
	diff -s wejscie.txt wyjscie.txt

#Sprzataczka	
.PHONY: clean tar
clean:                                                     
	rm -f *.o *.x
tar: clean
	(cd ../; tar -cvzf $(DIR).tar.gz  $(DIR) )
