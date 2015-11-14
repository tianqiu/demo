main:tail.o
	gcc -o tail tail.o
clean:
	rm -rf *.o tail
