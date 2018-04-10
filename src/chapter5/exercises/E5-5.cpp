#include <iostream>
#include <iomanip>
#include <vector>
#include <locale>

using std::vector;

int mainE5_5() {
	vector<unsigned int> product_ids {};
	vector<unsigned int> quantities {};
	vector<double> unit_prices{};
	char answer {};

	do {
		unsigned int id {};
		unsigned int quantity {};
		double unit_price {};
		std::cout << "Enter product id, quantity and unit price ($): ";
		std::cin >> id;
		std::cin >> quantity;
		std::cin >> unit_price;
		product_ids.push_back(id);
		quantities.push_back(quantity);
		unit_prices.push_back(unit_price);
		std::cout << "Do you wish to enter another product (y/n)? ";
		std::cin >> answer;
	} while (std::tolower(answer) != 'n');

	std::cout << std::endl << std::left
			<< std::setw(20) << "Product"
			<< std::setw(20) << "Quantity"
			<< std::setw(20) << "Unit Price"
			<< "Cost" << std::endl;
	for (int i {}; i < 80; i++)
		std::cout << '-';
	std::cout << std::endl;

	double total {};
	for (vector<unsigned int>::size_type i {}; i < product_ids.size(); i++) {
		double cost {unit_prices.at(i) * static_cast<double>(quantities.at(i))};
		total += cost;
		std::cout << std::setw(20) << product_ids.at(i)
				  << std::setw(20) << quantities.at(i)
				  << std::fixed << std::setprecision(2) << "$" << std::setw(19) << unit_prices.at(i)
				  << "$" << cost
				  << std::endl;
	}
	std::cout << std::right << std::setw(61) << "$" << total << std::endl;
}
