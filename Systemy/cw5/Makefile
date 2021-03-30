DIR = `basename $(PWD)`

.PHONY: runproduc runkonsum runcw5 runPOTOK runcw5b

runproduc: producent.c
	gcc -o producent.o producent.c
	xterm -hold -title producent -e ./producent.o potok &

runkonsum: konsument.c
	gcc -o konsument.o konsument.c
	xterm -hold -title konsument -e ./konsument.o potok &

runcw5: cw5.c producent.c konsument.c
	gcc -o producent.o producent.c
	gcc -o konsument.o konsument.c
	gcc -o cw5.o cw5.c
	./cw5.o

runPOTOK: 
	mkfifo -m 0777 potok

runcw5b:
	make runPOTOK
	make runproduc
	make runkonsum
	

#Sprzataczka	
.PHONY: clean tar
clean:                                                     
	rm -f *.o potok wyjscie.txt
tar: clean
	(cd ../; tar -cvzf $(DIR).tar.gz  $(DIR) )
