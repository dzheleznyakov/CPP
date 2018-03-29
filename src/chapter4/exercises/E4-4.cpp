#include <iostream>

int mainE4_4() {
	int num {};
	std::cout << "Enter an integer: ";
	std::cin >> num;

	std::cout << "The integer is "
			  << (num <= 20 ? "less than or equal to 20."
					  : (num > 20 && num <= 30) ? "greater than 20 and less than or equal to 30."
					  : (num > 30 && num <= 100) ? "greater than 30 and less than or equal to 100."
					  : "greater than 100.")
			  << std::endl;
}
