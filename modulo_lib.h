// An awesome library for modular addition and multiplication.
#ifndef __MODULO_LIB_H__
#define __MODULO_LIB_H__

#include <string>
#include <iostream>

// Returns (a*b)%mod.
int modulo_multiply(int a, int b, int mod);

// Returns (a+b)%mod.
int modulo_add(int a, int b, int mod);

// Prints a result and a newline to an output stream in the following format:
//  message: result
void print(std::string message, int result, std::ostream& out=std::cout);


#endif // __MODULO_LIB_H__
