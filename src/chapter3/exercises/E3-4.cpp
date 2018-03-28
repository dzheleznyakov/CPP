#include <iostream>
#include <iomanip>

int mainE3_4() {
	int num {0};
	char ch {};
	std::cout << "Enter four characters: ";

	std::cin >> ch;
	num |= static_cast<int>(ch);

	num <<= 8;
	std::cin >> ch;
	num |= static_cast<int>(ch);

	num <<= 8;
	std::cin >> ch;
	num |= static_cast<int>(ch);

	num <<= 8;
	std::cin >> ch;
	num |= static_cast<int>(ch);

	std::cout << "The encoding number is: " << std::hex << std::setfill('0') << std::setw(8) << num;
	std::cout << "\nThe encoded characters are: ";
	unsigned int mask {0b11111111};
	std::cout << static_cast<char>(num & mask) << " ";
	mask <<= 8;
	std::cout << static_cast<char>((num & mask) >> 8) << " ";
	mask <<= 8;
	std::cout << static_cast<char>((num & mask) >> 16) << " ";
	mask <<= 8;
	std::cout << static_cast<char>((num & mask) >> 24);
	std::cout << std::endl;
}
