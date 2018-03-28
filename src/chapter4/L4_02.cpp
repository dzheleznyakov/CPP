#include <iostream>

int mainL4_02() {
	std::cout << "Enter an integer between 50 and 100: ";

	int value {};
	std::cin >> value;

	if (value < 50)
		std::cout << "The value is invalid - it is less than 50." << std::endl;

	if (value > 100)
		std::cout << "The value is invalid - it is greater than 100." << std::endl;

	std::cout << "You entered " << value <<  std::endl;
}
