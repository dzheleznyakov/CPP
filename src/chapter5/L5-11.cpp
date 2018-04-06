#include <iostream>
#include <locale>

int mainL5_11() {
	const int maxLength {100};
	char text[maxLength] {};

	std::cout << "Enter a line of text:" << std::endl;

	std::cin.getline(text, maxLength);
	std::cout << "You entered:\n" << text << std::endl;
	size_t vowels {};
	size_t consonants {};
	for (int i {}; text[i] != '\0'; i++) {
		if (isalpha(text[i])) {
			switch(tolower(text[i])) {
			case 'a': case 'e': case 'i': case 'o': case 'u':
				vowels++;
				break;
			default:
				consonants++;
			}
		}
	}
	std::cout << "Your input contained " << vowels << " vowels and "
			  << consonants << " consonants." << std::endl;
}
