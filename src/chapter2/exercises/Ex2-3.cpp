#include <iostream>

int mainE2_3() {
	const unsigned inches_per_foot {12};
	unsigned int length {};

	std::cout << "Enter the length in inches: ";
	std::cin >> length;

	unsigned int feet {length / inches_per_foot};
	unsigned int inches {length % inches_per_foot};

	std::cout << length << " inches is " << feet << " feet and " << inches << " inches." << std::endl;
}
