#include <iostream>
#include <iomanip>
#include <cmath>

int main() {
	const size_t narrays {3};
	const size_t nelements {6};
	auto arrays = new int*[narrays];
	for (size_t i {}; i < narrays; i++)
		arrays[i] = new int[nelements];

	for (size_t i {}; i < narrays; i++) {;
		for (size_t j {}; j < nelements; j++) {
			int value {static_cast<int>(std::pow(j + 1, i + 1))};
			arrays[i][j] = value;
		}
	}

	for (size_t i {}; i < narrays; i++) {
		std::cout << "The values in the in the array number " << i + 1 << ": " << std::endl;
		for (size_t j {}; j < nelements; j++)
			std::cout << std::setw(5) << arrays[i][j];
		std::cout << std::endl << std::endl;
	}

	for (size_t i {}; i < narrays; i++)
		delete [] arrays[i];
	delete [] arrays;
}
