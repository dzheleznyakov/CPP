#include <iostream>
#include <cmath>
#include <iomanip>

int mainE2_4() {
	const double inches_per_foot {12};
	const double pi {3.14159265};
	const double pi_degrees {180};
	double height_in_inches {};
	double distance_feet {};
	double distance_inches {};
	double angle {};

	std::cout << "Enter the height of you eye (inches) : ";
	std::cin >> height_in_inches;
	std::cout << "Enter the distance from the tree (feet and inches): ";
	std::cin >> distance_feet >> distance_inches;
	std::cout << "Enter the angle (degrees): ";
	std::cin >> angle;
	angle *= pi / pi_degrees;

	double height_in_feet = height_in_inches / inches_per_foot;
	double distance_in_feet = distance_feet + distance_inches / inches_per_foot;
	double tree_height_in_feet = height_in_feet + distance_in_feet * std::tan(angle);
	std::cout << "The height of the tree is "
			<< std::fixed << std::setprecision(2) << tree_height_in_feet
			<< " feet." << std::endl;
}
