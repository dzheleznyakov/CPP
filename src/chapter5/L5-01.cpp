#include <iostream>

int mainL5_01() {
	const size_t size {6};
	unsigned int height[size] {26, 37, 47, 55, 62, 75};
	unsigned int total {};

	for (size_t i {}; i < size; ++i) {
		total += height[i];
	}
	unsigned int average {total / static_cast<unsigned int>(size)};
	std::cout << "The average height is " << average << std::endl;

	unsigned int count {};
	for (size_t i{}; i < size; ++i) {
		count += height[i] < average;
	}
	std::cout << count << " people are below average height." << std::endl;
}
