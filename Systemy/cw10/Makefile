DIR = `basename $(PWD)`

.PHONY: runcw10

runcw10:  biblioteka.c biblioteka.h cw10.c
	gcc -pthread -o cw10.o cw10.c biblioteka.c biblioteka.h
	./cw10.o  
	

#Sprzataczka	
.PHONY: clean tar
clean:                                                     
	rm -f *.o .x
tar: clean
	(cd ../; tar -cvzf $(DIR).tar.gz  $(DIR) )
