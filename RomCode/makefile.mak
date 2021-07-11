CC = gcc
#used standard c99 where the __func__ is available to print function names
CFLAGS = -Wall -c -g -DTRACE_FEATURE -std=c99
OFLAGS = -o
VFLAGS = --tool=memcheck --leak-check=yes --show-reachable=yes
BIN = ../bin/
INCLUDE = -I../include/
HEADER = ../include/
SRC = ../src/
OBJ = ../obj/

$(BIN)dout: $(OBJ)main.o $(OBJ)functions.o
	$(CC) $(OFLAGS) dout $(OBJ)main.o $(OBJ)functions.o
	mv dout $(BIN)

$(OBJ)main.o: $(SRC)main.c $(HEADER)myheader.h
	$(CC) $(CFLAGS) $(SRC)main.c $(INCLUDE)
	mv main.o $(OBJ)

$(OBJ)functions.o: $(SRC)functions.c $(HEADER)myheader.h
	$(CC) $(CFLAGS) $(SRC)functions.c $(INCLUDE)
	mv functions.o  $(OBJ)


valgrind: $(BIN)dout
	valgrind $(VFLAGS) ./$(BIN)dout

clean: 
	rm $(BIN)dout
	rm $(OBJ)*.o
