#include <iostream>
#include <locale>

int main() {
	char ch {' '};
	unsigned int count {};
	std::cout << "Enter a string (put '#' at the end of the string): ";
	do {
		if (!std::isspace(ch))
			count++;
		std::cin >> ch;
	} while(ch != '#');
	std::cout << "\nYou entered " << count << " non-whitespace characters" << std::endl;
}
