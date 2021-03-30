.SUFFIXES: .c .cpp .o .x .h

DIR = `basename $(PWD)`

LIB_DIR = ./lib
LIB_NAME = Biblioteka
LIB_STAT = lib$(LIB_NAME).a
LIB_SHAR = lib$(LIB_NAME).so

FLAGS =  -Wall -O -fPIC -pthread
LFLAGS = -Wall -O

NAME1 = biblioteka
OBJS1  = $(NAME1).o


HEADS = $(NAME1).h $(NAME2).h

NAME10 = main
OBJS = $(NAME10).o

EXEC7s  = $(NAME10)s.x
EXEC7d  = $(NAME10)d.x

LIB_OBJS = $(OBJS1) $(OBJS2)

%.o: %.c %.h
	gcc $(FLAGS) -c $<

%.o: %.c
	gcc $(FLAGS) -c $<

$(LIB_STAT): $(LIB_OBJS)
	ar rv $@ $?
	mkdir -p $(LIB_DIR)
	mv $(LIB_STAT) $(LIB_DIR)

$(LIB_SHAR): $(LIB_OBJS) 
	gcc -shared -o $@ $(LFLAGS) $(LIB_OBJS)
	mkdir -p $(LIB_DIR)
	mv $(LIB_SHAR) $(LIB_DIR)

$(EXEC7s): $(OBJS) $(LIB_STAT) 
	gcc -o $@ $(FLAGS) $(OBJS) -L$(LIB_DIR) -l$(LIB_NAME) -lrt

$(EXEC7d): $(OBJS) $(LIB_SHAR)
	gcc -o $@ $(FLAGS) $(OBJS) -L$(LIB_DIR) -l$(LIB_NAME) -Wl,-R $(LIB_DIR) -lrt

$(OBJS7): $(HEADS)

.PHONY: run7s run7d

# 1) Z biblioteka statyczna
run7s: main.c biblioteka.c biblioteka.h
	gcc -o main.o main.c biblioteka.c biblioteka.h -lrt -pthread
	./main.o
	diff -s ./wejscie.txt ./wyjscie.txt


# 2) Z biblioteka dzielona
run7d: $(EXEC7d)
	./$(EXEC7d)
	diff -s ./wejscie.txt ./wyjscie.txt

.PHONY: clean tar
clean:                                                     
	rm -f *.o *~ *.a *.so *.x wyjscie.txt ; rm -rf ${LIB_DIR}
tar: clean
	(cd ../; tar -cvzf $(DIR).tar.gz $(DIR) )
