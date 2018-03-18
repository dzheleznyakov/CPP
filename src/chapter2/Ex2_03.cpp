#include <iostream>
#include <cfloat>

int main() {
	std::cout << "The mantissa for type float has " << FLT_MANT_DIG << " bits." << std::endl;
	std::cout << "The maximum value of type float is " << FLT_MAX << std::endl;
	std::cout << "The minimum non-zero value of type float is " << FLT_MIN << std::endl;
	std::cout << "\n" << std::endl;

	double a{1.5}, b{}, c{}, result{};
	result = a / b;
	std::cout << a << "/" << b << " = " << result << std::endl;
	std::cout << result << " + " << a << " = " << result + a << std::endl;
	result = b / c;
	std::cout << b << "/" << c << " = " << result << std::endl;
}
