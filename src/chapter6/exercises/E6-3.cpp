#include <iostream>
#include<cmath>
#include <vector>

using std::vector;

int mainE6_3() {
	size_t size {};
	std::cout << "Enter the number of elements: ";
	std::cin >> size;

	auto pvector = new vector<double>(size);

	for (unsigned long long i {}; i < size; i++)
		(*pvector)[static_cast<size_t>(i)] = (1.0 / (i + 1) / (i + 1));

	double sum {};
	for (auto value : *pvector)
		sum += value;
	sum *= 6;

	std::cout << "The value is " << std::sqrt(sum) << std::endl;

	delete pvector;
	pvector = nullptr;
}
