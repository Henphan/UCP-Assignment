EXEC = escape
CC = gcc
OBJ = main.o fileIO.o interface.o
FLAGS = -Wall -Werror -pedantic -ansi

${EXEC}: ${OBJ}
	${CC} ${FLAGS} ${OBJ} -o ${EXEC}

main.o: main.c
	${CC} ${FLAGS} main.c -c
fileIO.o: fileIO.c
	${CC} ${FLAGS} fileIO.c -c
interace.o: interface.c
	${CC} ${FLAGS} interface.c -c

test: ${EXEC}
	./${EXEC} map.txt

clean:
	rm -f *.o ${EXEC}

