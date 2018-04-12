#include <iostream>
#include <cmath>

int mainE6_2() {
	size_t size {};
	std::cout << "Enter the array size: ";
	std::cin >> size;

	auto parray = new float[size];

	for (size_t i {}; i < size; i++)
		*(parray + i) = 1.0 / (i + 1) / (i + 1);

	float sum {};
	for (size_t i {}; i < size; i++)
		sum += *(parray + i);
	sum *= 6;

	std::cout << "The result is " << (std::sqrt(sum)) << std::endl;

	delete [] parray;
	parray = nullptr;
}
