all: modulo_lib.o

modulo_lib.o: modulo_lib.cc modulo_lib.h 
	g++ -c modulo_lib.cc -o $@

clean:
	rm -rf *.o
