main: main.o recursion.o
	g++ -o main main.o recursion.o

recursion.o: recursion.cpp recursion.h

tests: tests.o recursion.o 
	g++ -o tests tests.o recursion.o

tests.o: doctest.h recursion.h

clean:
	rm -f main main.o recursion.o
