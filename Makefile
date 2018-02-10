all: modulo_lib.o

modulo_lib.o: modulo_lib.cc modulo_lib.h 
	g++ -c $< -o $@

clean:
	rm -rf *.o
