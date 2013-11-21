CCFLAGS = -Wall -pedantic -ansi -g
CC = gcc

all: Queue.o customer.o customerDB.o main.o radix.o pa5

pa5: main.o Queue.o customer.o customerDB.o radix.o
	${CC} ${CCFLAGS} -o pa5 main.o customer.o customerDB.o Queue.o radix.o

main.o: main.c
	${CC} ${CCFLAGS} -c main.c

customer.o: customer.c
	${CC} ${CCFLAGS} -c customer.c

customerDB.o: customerDB.c
	${CC} ${CCFLAGS} -c customerDB.c

radix.o: radix.c
	${CC} ${CCFLAGS} -c radix.c

Queue.o: Queue.c
	${CC} ${CCFLAGS} -c Queue.c

clean:
	rm -f *.o *.gch pa5
