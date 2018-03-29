#include <iostream>

int mainL4_07() {
	int choice {};

	std::cout << "Your electronic recipe book is at your service.\n"
			  << "you can choose from the following delicious dishes:\n"
			  << "1 Boiled eggs\n"
			  << "2 Fried eggs\n"
			  << "3 Scrambled eggs\n"
			  << "4 Coddled eggs\n\n"
			  << "Enter your selection number: ";
	std::cin >> choice;

	switch (choice) {
	case 1:
		std::cout << "\nBoil some eggs." << std::endl;
		break;
	case 2:
		std::cout << "\nFry some eggs." << std::endl;
		break;
	case 3:
		std::cout << "\nScramble some eggs." << std::endl;
		break;
	case 4:
		std::cout << "\nCoddle some eggs." << std::endl;
		break;
	default:
		std::cout << "You entered a wrong number - try raw eggs." << std::endl;
	}
}
