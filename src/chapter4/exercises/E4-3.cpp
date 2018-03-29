#include <iostream>
#include <locale>

int mainE4_3() {
	char letter {};
	std::cout << "Enter a letter: ";
	std::cin >> letter;

	if (isalpha(letter)) {
		switch (tolower(letter)) {
		case 'a': case 'e': case 'o': case 'u': case 'i':
			std::cout << "You entered a vowel." << std::endl;
			break;
		default:
			std::cout << "You entered a consonant." << std::endl;
			break;
		}
		if (isupper(letter)) {
			std::cout << "You entered an upper case letter." << std::endl;
		} else {
			std::cout << "You entered a lower case letter." << std::endl;
		}
	} else {
		std::cout << "You did not enter a letter." << std::endl;
	}
}
