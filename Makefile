all:
	make build
	make doc

build: main.o
	g++ main.o -o count

main.o: main.cc
	g++ -c main.cc

clean:
	rm *.o count

doc:
	doxygen main.cc