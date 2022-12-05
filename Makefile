CXXFLAGS = -g -Wall -std=c++11

main: main.o recursion.o
	g++ $(CXXFLAGS) -o main main.o recursion.o

main.o: main.cpp recursion.h

recursion.o: recursion.cpp recursion.h

tests: tests.o recursion.o 
	g++ $(CXXFLAGS) -o tests tests.o recursion.o

tests.o: tests.cpp doctest.h recursion.h

clean:
	rm -f main tests main.o recursion.o tests.o
