#include <iostream>
#include <iomanip>

using std::setw;

int mainE5_1() {
	unsigned int limit {};
	std::cout << "Enter a limit (a positive integer greater than 1): ";
	std::cin >> limit;

	if (limit < 1) {
		std::cout << "The entered limit is not greater than 1." << std::endl;
		return 1;
	}

	std::cout << std::left << setw(8) << "n" << "| " << "n^2" << std::endl;
	std::cout << std::setfill('_') << setw(20) << "_" << std::setfill(' ') << std::endl;

	for (int i {1}; i <= limit; i += 2) {
		std::cout << std::left << setw(8) << i << "| " << (i * i) << std::endl;
	}
}
