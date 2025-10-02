EXEC = escape
CC = gcc
OBJ = main.o fileIO.o interface.o colour.o terminal.o input.o movement.o
FLAGS = -Wall -Werror -pedantic -ansi

${EXEC}: ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${EXEC}

main.o: main.c
	${CC} ${FLAGS} main.c -c
fileIO.o: fileIO.c
	${CC} ${FLAGS} fileIO.c -c
interace.o: interface.c
	${CC} ${FLAGS} interface.c -c
colour.o: colour.c
	${CC} ${FLAGS} colour.c -c
terminal.o: terminal.c
	${CC} ${FLAGS} terminal.c -c
input.o: input.c
	${CC} ${FLAGS} input.c -c
movement.o: movement.c
	${CC} ${FLAGS} movement.c -c

test: ${EXEC}
	./${EXEC} map.txt

clean:
	rm -f *.o ${EXEC}

leaksOn:
	export MallocStackLogging=1
leaksOff:
	export MallocStackLogging=0
