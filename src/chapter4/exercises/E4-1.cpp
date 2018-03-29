#include <iostream>

int mainE4_1() {
	int a {};
	int b {};
	std::cout << "Enter an integer: ";
	std::cin >> a;
	std::cout << "Enter another integer: ";
	std::cin >> b;

	if (a - b) {
		std::cout << "The integers are different." << std::endl;
	} else {
		std::cout << "The integers are equal." << std::endl;
	}
}
