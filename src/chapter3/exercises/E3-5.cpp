#include <iostream>

int mainE3_5() {
	int a {}, b {};
	std::cout << "Enter integer a: ";
	std::cin >> a;
	std::cout << "Enter integer b: ";
	std::cin >> b;

	a = a - b;
	b = a + b;
	a = b - a;

	std::cout << "The values are swapped; a = " << a << ", b = " << b << std::endl;
}
