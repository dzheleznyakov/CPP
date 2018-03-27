#include <iostream>
#include <iomanip>

using std::setw;

int maiE3_1() {
	unsigned int num {};
	std::cout << "Input a positive integer: ";
	std::cin >> num;

	std::cout << std::hex << std::setfill('0')
			  << "\nThe values of num and ~num in hexadecimal representation are :   "
			  << setw(8) << num << "     " << setw(8) << (~num);

	std::cout << std::dec << std::setfill(' ')
			  << "\nThe values of num and ~num in decimal representation are     :"
			  << setw(11) << num << "   " << setw(10) << (~num);

	std::cout << std::endl;
}
