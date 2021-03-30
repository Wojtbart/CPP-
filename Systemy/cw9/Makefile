DIR = `basename $(PWD)`

.PHONY: runcw9

runcw9:  biblioteka.c biblioteka.h main.c
	gcc -pthread -o glowny.o main.c biblioteka.c biblioteka.h
	./glowny.o  ${LWatk} ${LSekc}
	

#Sprzataczka	
.PHONY: clean tar
clean:                                                     
	rm -f *.o .x
tar: clean
	(cd ../; tar -cvzf $(DIR).tar.gz  $(DIR) )
