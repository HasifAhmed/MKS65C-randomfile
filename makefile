all:randfile.o
	gcc randfile.o

run:
	./a.out

clean:
	rm *.o
	rm a.out

randfile.o: randfile.c
	gcc -c randfile.c
