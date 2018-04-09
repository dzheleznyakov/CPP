#include <iostream>

int maiE5_2() {
	int num {1};
	int sum {};
	int count {};

	while (num) {
		std::cout << "Enter an integer (or 0 to finish): ";
		std::cin >> num;
		if (num) {
			sum += num;
			count++;
		}
	}
	std::cout << "The total sum of entered values is " << sum;
	std::cout << "\nThe average value is " << (sum / (count * 1.0)) << std::endl;
}
