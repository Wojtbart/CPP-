DIR = `basename $(PWD)`

.PHONY: runcw6

runcw6:  biblioteka.c biblioteka.h glowny.c powielacz.c
	gcc -pthread -o glowny.o glowny.c biblioteka.c biblioteka.h
	gcc -pthread -o powielacz.o powielacz.c biblioteka.c biblioteka.h
	./glowny.o powielacz.o ${LProc} ${LSekc}
	

#Sprzataczka	
.PHONY: clean tar
clean:                                                     
	rm -f *.o .x
tar: clean
	(cd ../; tar -cvzf $(DIR).tar.gz  $(DIR) )
