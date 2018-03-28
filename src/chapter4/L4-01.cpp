#include <iostream>

int mainL4_01() {
	char first {};
	char second {};

	std::cout << "Enter a character: ";
	std::cin >> first;

	std::cout << "Enter a second character: ";
	std::cin >> second;

	std::cout << "The value of the expression " << first << '<' << second
			  << " is: " << std::boolalpha << (first < second) << std::endl;
	std::cout << "The value of the expression " << first << "==" << second
			  << " is: " << std::boolalpha << (first == second) << std::endl;
}
