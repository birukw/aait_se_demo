#include "modulo_lib.h"
#include <iostream>

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


bool test_modulo_multiply() {
    // TODO(tomichaw): Implement this.
	return true;
}

bool test_modulo_add() {
    // TODO(tomichaw): Implement this.
	return true;
}

// QUESTION: How do you test the "print" function?


int main(int argc, char* argv[]) {
	bool multiply_passed = test_modulo_multiply();
	bool add_passed = test_modulo_add();
	std::cout << "modulo_multiply: " << status(multiply_passed) << std::endl;
	std::cout << "modulo_add: " << status(add_passed) << std::endl;

	if (multiply_passed && add_passed) {
		std::cout << color(0, "All test cases passed!");
		return 0;
	}
	std::cout << color(1, "Some test cases failed!") << std::endl;
	return 1;
}
