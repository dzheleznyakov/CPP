#include <iostream>

int mainE4_5() {
	const unsigned int quarter {25};
	const unsigned int dime {10};
	const unsigned int nickel {5};
	const unsigned int penny {1};
	double amount {};
	std::cout << "Enter a sum between $0 and $10: ";
	std::cin >> amount;

	if (amount < 0 || amount > 10) {
		std::cout << "You entered the wrong amount." << std::endl;
		return 1;
	}

	unsigned int remaining {static_cast<unsigned int>(amount * 100)};

	unsigned int number_of_quarters {remaining / quarter};
	remaining %= quarter;
	unsigned int number_of_dimes {remaining / dime};
	remaining %= dime;
	unsigned int number_of_nickles {remaining / nickel};
	remaining %= nickel;
	unsigned int number_of_pennies {remaining / penny};

	std::cout << "$" << amount << " is made up by "
			  << number_of_quarters << (number_of_quarters == 1 ? " quarter, " : " quarters, ")
			  << number_of_dimes << (number_of_dimes == 1 ? " dime, " : " dimes, ")
			  << number_of_nickles << (number_of_nickles == 1 ? " nickel and " : " nickels and ")
			  << number_of_pennies << (number_of_pennies == 1 ? " penny." : " pennies.")
			  << std::endl;
}
