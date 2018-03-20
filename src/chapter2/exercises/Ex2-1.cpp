#include <iostream>
#include <cmath>
#include <iomanip>

int mainE2_1() {
	std::cout << "Enter the radius of a circle: ";
	double radius;
	std::cin >> radius;
	std::cout << "The area of the circle is "
			  << std::fixed << std::setprecision(2) << (M_PI * radius * radius) << std::endl;
}
