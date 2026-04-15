all: direct-dlp

direct-dlp: cli.o legacy.o fio.o
	gcc cli.o legacy.o fio.o -o direct-dlp

cli.o: ./src/cli.c ./src/legacy.h ./src/fio.h 
	gcc -Wall -Werror ./src/cli.c -c

fio.o: ./src/fio.c ./src/fio.h
	gcc -Wall -Werror ./src/fio.c -c

legacy.o: ./src/legacy.c ./src/legacy.h
	gcc -Wall -Werror ./src/legacy.c -c

clean:
	rm -f direct-dlp *.o
