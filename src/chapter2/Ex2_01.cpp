#include <iostream>;

int mainE2_01() {
	int apple_count {15};
	int orange_count {5};
	int total_fruit {apple_count + orange_count};
	int binary_literal {0b1101};
	int hex_literal {0xABCDEF};

	std::cout << "The value of apple_count is " << apple_count << std::endl;
	std::cout << "The value of orange_count is " << orange_count << std::endl;
	std::cout << "The value of total_fruit is " << total_fruit << std::endl;
	std::cout << "The value of binary_literal is " << binary_literal << std::endl;
	std::cout << "The value of hex_literal is " << hex_literal << std::endl;
}
