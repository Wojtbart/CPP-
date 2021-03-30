DIR = `basename $(PWD)`

.PHONY: runcw8ser runcw8kli

runcw8ser:  biblioteka.c biblioteka.h serwer.c 
	gcc -pthread -o serwer.x serwer.c biblioteka.c biblioteka.h -lrt
	xterm -hold -title SERWER -bg red -e ./serwer.x &

runcw8kli:  biblioteka.c biblioteka.h  klient.c
	gcc -pthread -o klient.x klient.c  biblioteka.c biblioteka.h -lrt
	xterm -hold -title KLIENT1 -bg black -e ./klient.x &
	xterm -hold -title KLIENT2 -bg purple -e ./klient.x &
	xterm -hold -title KLIENT3 -bg blue -e ./klient.x &
	

#Sprzataczka	
.PHONY: clean tar
clean:                                                     
	rm -f *.o *.x *~
tar: clean
	(cd ../; tar -cvzf $(DIR).tar.gz  $(DIR) )
