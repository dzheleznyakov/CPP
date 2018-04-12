#include <iostream>
#include <iomanip>

int mainE6_1() {
	const size_t size {50};
	int even[size] {};
	for (size_t i {}; i < size; i++)
		even[i] = 2 * (i + 1);

	size_t perline {10};
	int* peven {even};

	std::cout << "The numbers are:\n";
	for (size_t i {}; i < size; i++) {
		std::cout << std::setw(4) << *(peven + i);
		if ((i + 1) % perline == 0)
			std::cout << std::endl;
	}

	std::cout << std::endl;
	std::cout << "The numbers in reverse order are:\n";
	for (size_t i {size}; i > 0; i--) {
		std::cout << std::setw(4) << *(peven + (i - 1));
		if ((i - 1) % perline == 0)
			std::cout << std::endl;
	}
}
