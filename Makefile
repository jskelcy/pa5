CCFLAGS = -Wall -pedantic -ansi
CC = gcc

all: Queue.o customer.o customerDB.o main.o pa5

pa5: main.o Queue.o customer.o customerDB.o
	${CC} ${CCFLAGS} -o pa5 main.o customer.o customerDB.o Queue.o

main.o: main.c
	${CC} ${CCFLAGS} -c main.c

customer.o: customer.c
	${CC} ${CCFLAGS} -c customer.c

customerDB.o: customerDB.c
	${CC} ${CCFLAGS} -c customerDB.c

Queue.o: Queue.c
	${CC} ${CCFLAGS} -c Queue.c

clean:
	rm -f *.o *.gch pa5
