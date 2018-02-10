#include "modulo_lib.h"
#include <ostream>

int modulo_multiply(int a, int b, int mod) {
	return (a * b) % mod;
}

int modulo_add(int a, int b, int mod) {
	return (a + b) % mod;
}

void print(std::string message, int result, std::ostream& out) {
	out << message << ": " << result;
}
