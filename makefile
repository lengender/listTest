a.out: main.o list.o
	gcc main.o list.o -o a.out


main.o: main.c
	gcc -c main.c -I .

list.o: list.c
	gcc -c list.c -Wall -I .

clean:
	rm -rf a.out main.o list.o
