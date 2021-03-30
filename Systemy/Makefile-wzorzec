DIR = `basename $(PWD)`

.PHONY: run1a run1b run1c run1d run1e
run1a: a.c
	gcc -o cw1a.o a.c
	./cw1a.o
run1b: b.c
	gcc -o cw1b.o b.c
	./cw1b.o
run1c: c.c
	gcc -o cw1c.o c.c
	./cw1c.o
run1d: d.c
	gcc -o cw1d.o d.c
	./cw1d.o
run1e: e.c
	gcc -o cw1e.o e.c
	./cw1e.o

#Sprzataczka	
.PHONY: clean tar
clean:                                                     
	rm -f *.o  "Drzewo".txt
tar: clean
	(cd ../; tar -cvzf $(DIR).tar.gz  $(DIR) )
