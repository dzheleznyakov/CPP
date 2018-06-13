#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
#include <locale>

using std::vector;
using std::string;

int main() {
	vector<string> names {};
	vector<double> grades {};
	char answer {};
	string* pname = new string {};
	double* pgrade = new double {};

	do {
		std::cout << "Enter a students name: ";
		std::getline(std::cin, *pname);
		names.push_back(*pname);

		std::cout << "Enter the grade: ";
		std::cin >> *pgrade;
		grades.push_back(*pgrade);

		std::cout << "Do you wish to enter another student entry? (y/n): ";
		std::cin >> answer;
	} while (tolower(answer) != 'n');
	std::cout << std::endl;

	delete pname;
	pname = nullptr;
	delete pgrade;
	pgrade = nullptr;

	int name_width {15};
	std::cout << std::left << std::setw(name_width) << "Name";
	std::cout << "Grade";
}
