CC=g++

trabalho1: main.o nacional.o estadual.o
	$(CC) -o trabalho1 main.o nacional.o estadual.o
