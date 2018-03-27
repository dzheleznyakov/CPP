#include <iostream>

int mainE3_2() {
	unsigned int inches_per_foot {12};

	double shelf_length_in_feet {};
	double shelf_depth_in_feet {};
	std::cout << "Enter the length and depth of the shelf in feet: ";
	std::cin >> shelf_length_in_feet >> shelf_depth_in_feet;
	unsigned int shelf_length {static_cast<unsigned int>(shelf_length_in_feet * static_cast<int>(inches_per_foot))};
	unsigned int shelf_depth {static_cast<unsigned int>(shelf_depth_in_feet * static_cast<int>(inches_per_foot))};

	unsigned int box_side {};
	std::cout << "Enter the box side size in inches: ";
	std::cin >> box_side;

	unsigned int number_of_boxes_in_length {shelf_length / box_side};
	unsigned int number_of_boxes_in_depth {shelf_depth / box_side};

	std::cout << "The shelf can hold " << (number_of_boxes_in_length * number_of_boxes_in_depth) << " box(es)" << std::endl;
}
