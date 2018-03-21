#include <iostream>

int main() {
	const double pounds_per_kilo {2.2};
	const double meters_per_foot {0.3048};

	double weight_in_pounds {};
	double height_in_feet {};
	std::cout << "Enter your weight (pounds): ";
	std::cin >> weight_in_pounds;
	std::cout << "Enter your height (feet): ";
	std::cin >> height_in_feet;

	double weight_in_kilos {weight_in_pounds / pounds_per_kilo};
	double height_in_meters {height_in_feet * meters_per_foot};
	std::cout << "Your BMI is " << (weight_in_kilos / (height_in_meters * height_in_meters)) << std::endl;
}
