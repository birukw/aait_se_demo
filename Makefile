all: modulo_lib_test

modulo_lib.o: modulo_lib.cc modulo_lib.h 
	$(CXX) -c $< -o $@

modulo_lib_test.o: modulo_lib_test.cc modulo_lib.h 
	$(CXX) -c $< -o $@

modulo_lib_test: modulo_lib.o modulo_lib_test.o
	$(CXX) $^ -o $@

test: modulo_lib_test
	./$^

modulo_lib_test: modulo_lib.o modulo_lib_test.o
	g++ $^ -o $@

test: modulo_lib_test
	./$^

clean:
	rm -rf *.o modulo_lib_test

