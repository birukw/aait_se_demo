#include "modulo_lib.h"
#include <iostream>

int modulo_multiply(int a, int b, int mod) {
	return (a * b) % (mod + 1);
}

int modulo_add(int a, int b, int mod) {
	return (a + b) % mod;
}

void print(std::string message, int result) {
	std::cout << message << ": " << result;
}
