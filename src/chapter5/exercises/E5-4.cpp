#include <iostream>
#include <iomanip>
#include <vector>

using std::vector;

int mainE5_4() {
	vector<unsigned int> nums {};
	for (unsigned int i {1}; i <= 100; i++)
		nums.push_back(i);

	unsigned int perline = 6;
	for (vector<unsigned int>::size_type i {}; i < nums.size(); i++) {
		if (i != 0 && i % perline == 0)
					std::cout << std::endl;
		std::cout << std::setw(4) << nums.at(i);
	}
	std::cout << std::endl;

	perline = 8;
	unsigned int column_count {};
	for (vector<unsigned int>::size_type i {}; i < nums.size(); i++) {
		if (nums.at(i) % 7 == 0 || nums.at(i) % 13 == 0)
			continue;
		if (column_count % perline == 0)
			std::cout << std::endl;
		std::cout << std::setw(4) << nums.at(i);
		column_count++;
	}
	std::cout << std::endl;
}
