#include <iostream>

int mainL5_06() {
	size_t count {};
	std::cout << "How many heights will you enter? ";
	std::cin >> count;
	unsigned int height[count];

	size_t entered {};
	unsigned int total {};
	while (entered < count) {
		std::cout << "Enter a height: ";
		std::cin >> height[entered];
		if (height[entered]) {
			total += height[entered++];
		} else {
			std::cout << "A height must be positive - try again.\n";
		}
	}
	std::cout << "The average height is " << total / count << std::endl;
}
