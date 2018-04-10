#include <iostream>
#include <iomanip>
#include <array>

using std::array;

int mainE5_6() {
	const size_t size {90};
	array<unsigned int, size> fibonacci {};
	fibonacci.at(0) = 1;
	fibonacci.at(1) = 1;
	for (size_t i {2}; i < size; i++) {
		fibonacci.at(i) = fibonacci.at(i - 1) + fibonacci.at(i - 2);
	}

	unsigned int perline = 5;
	std::cout << std::left;
	for (size_t i {}; i < size; i++) {
		if (i % perline == 0 && i != 0)
			std::cout << std::endl;
		std::cout << std::setw(15) << fibonacci.at(i);
	}
}
