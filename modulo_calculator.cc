#include "modulo_lib.h"
#include <iostream>

int main(int argc, char* argv[]) {
	int a, b, mod;
	std::cout << "Welcome to the awesome modulo calculator!\n" 
	          << "Enter two numbers: ";
	std::cin >> a >> b;
	std::cout << "Enter the modulus: ";
	std::cin >> mod;
	print("multiplication", modulo_multiply(a, b, mod));
	print("addition", modulo_add(a, b, mod));
}
