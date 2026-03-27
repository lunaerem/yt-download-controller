all: controller

controller: main.o fio.o
	gcc main.o fio.o -o controller

main.o: ./src/main.c ./src/fio.h 
	gcc -Wall -Werror ./src/main.c -c

fio.o: ./src/fio.c ./src/fio.h
	gcc -Wall -Werror ./src/fio.c -c

clean:
	rm -f controller *.o
