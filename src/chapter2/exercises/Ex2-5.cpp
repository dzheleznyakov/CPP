#include <iostream>

int mainE2_5() {
	int a {};
	int b {};
	std::cout << "Enter two integers: ";
	std::cin >> a >> b;

	int larger {(a * (a / b) + b * (b / a)) / (a / b + b / a)};
	int smaller {(a * (b / a) + b * (a / b)) / (a / b + b / a)};
	std::cout << "The larger number is " << larger << ".\n"
			  << "The smaller number is " << smaller << std::endl;
}
