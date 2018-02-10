// An awesome library for modular addition and multiplication.
#ifndef __MODULO_LIB_H__
#define __MODULO_LIB_H__

#include <string>

// Returns (a*b)%mod.
int modulo_multiply(int a, int b, int mod);

// Returns (a+b)%mod.
int modulo_add(int a, int b, int mod);

// Prints a result and a newline in the following format:
//  message: result
void print(std::string message, int result);


#endif // __MODULO_LIB_H__