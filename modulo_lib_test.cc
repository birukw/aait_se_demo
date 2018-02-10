#include "modulo_lib.h"
#include <iostream>
#include <sstream>

#define ASSERT_EQUAL(a, b) \
if (a != b) { \
	std::cout << "   " << __FILE__ << ":" << __LINE__ \
	          << " Expectation not met: " << a << " == " << b \
	          << std::endl; \
	return false; \
}

// Returns ANSI colorized message.
std::string color(int color_index, const std::string& message) {
	std::string codes[] = {
		"\033[1;32m", // Bold Green
		"\033[1;31m", // Bold Red
	};
	return codes[color_index] + message + "\033[0m";
}

// Returns ANSI colorized test status.
std::string status(bool passed) {
	if (passed) {
		return color(0, "PASS");
	}
	return color(1, "FAIL");
}


struct TestInputs {
	int a, b, mod;
};

bool test_modulo_multiply() {
	TestInputs inputs[] = {
		{1, 2, 3},
		{2, 2, 3},
		{2, 2, 4}
	};

	int expected[] = {2, 1, 0};
	for (int i=0; i<3; ++i) {
		int result = modulo_multiply(inputs[i].a, inputs[i].b, inputs[i].mod);
		ASSERT_EQUAL(result, expected[i]);
	}
	return true;
}

bool test_modulo_add() {
	TestInputs inputs[] = {
		{1, 1, 3},
		{2, 2, 3},
		{1, 2, 3}
	};

	int expected[] = {2, 1, 0};
	for (int i=0; i<3; ++i) {
		int result = modulo_add(inputs[i].a, inputs[i].b, inputs[i].mod);
		ASSERT_EQUAL(result, expected[i]);
	}
	return true;
}

bool test_print() {
	std::ostringstream out;
	print("message", 10, out);
	ASSERT_EQUAL(out.str(), "message: 10\n");
    return true; 
}


int main(int argc, char* argv[]) {
	bool multiply_passed = test_modulo_multiply();
	bool add_passed = test_modulo_add();
	bool print_passed = test_print();
	std::cout << "modulo_multiply: " << status(multiply_passed) << std::endl;
	std::cout << "modulo_add: " << status(add_passed) << std::endl;
	std::cout << "print: " << status(print_passed) << std::endl;

	if (multiply_passed && add_passed && print_passed) {
		std::cout << color(0, "All test cases passed!");
		return 0;
	}
	std::cout << color(1, "Some test cases failed!") << std::endl;
	return 1;
}
