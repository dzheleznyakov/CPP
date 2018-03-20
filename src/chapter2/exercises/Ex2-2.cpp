#include <iostream>
#include <cmath>
#include <iomanip>

int mainE2_2() {
	std::cout << "Enter the radius of a circle: ";
	double radius;
	std::cin >> radius;

	std::cout << "Enter the output precision: ";
	unsigned short precision;
	std::cin >> precision;

	std::cout << "The area of the circle is "
			  << std::fixed << std::setprecision(precision) << (M_PI * radius * radius) << std::endl;
}
