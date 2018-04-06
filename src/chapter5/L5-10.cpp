#include <iostream>
#include <iomanip>

int mainL5_10() {
	const size_t size {1000};
	double x[size] {};
	double temp {};
	size_t count {};

	while (true) {
		std::cout << "Enter a non-zero value, o 0 to end: ";
		std::cin >> temp;
		if (!temp)
			break;

		x[count++] = temp;
		if (count == size) {
			std::cout << "Sorry, I can only store " << size << " values.\n";
			break;
		}
	}

	std::cout << "Starting sort." << std::endl;
	bool swapped {false};
	while (true) {
		for (size_t i {}; i < count - 1; ++i) {
			if (x[i] > x[i + 1]) {
				temp = x[i];
				x[i] = x[i + 1];
				x[i + 1] = temp;
				swapped = true;
			}
		}
		if (!swapped)
			break;
		swapped = false;
	}

	std::cout << "Your data in ascending sequence:\n"
			  << std::fixed << std::setprecision(1);
	const size_t perline {10};
	size_t n {};
	for (size_t i {}; i < count; ++i) {
		std::cout << std::setw(8) << x[i];
		if (++n == perline) {
			std::cout << std::endl;
			n = 0;
		}
	}
	std::cout << std::endl;
}
