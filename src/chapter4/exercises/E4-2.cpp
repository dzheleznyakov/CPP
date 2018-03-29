#include <iostream>

int mainE4_2() {
	int num {};

	std::cout << "Enter an integer between 1 and 100: ";
	std::cin >> num;

	if (num < 1 || num > 100) {
		std::cout << "The number is outside of the range." << std::endl;
	} else if (num < 50) {
		std::cout << "The number is less than 50." << std::endl;
	} else if (num > 50) {
		std::cout << "The number is greater than 50." << std::endl;
	} else {
		std::cout << "The number is equal to 50." << std::endl;
	}
}
