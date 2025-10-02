EXEC = escape
CC = gcc
FLAGS = -Wall -Werror -pedantic -ansi

${EXEC}: main.o fileIO.o
	${CC} ${FLAGS} main.o fileIO.o -o ${EXEC}

main.o: main.c
	${CC} ${FLAGS} main.c -c
fileIO.o: fileIO.c
	${CC} ${FLAGS} fileIO.c -c




