#include <iostream>
#include <cmath>
#include <iomanip>

using std::cout;
using std::cin;
using std::sqrt;

int main() {
	const double fish_factor {2.0/0.5};
	const double inches_per_foot {12.0};
	const double pi {3.14159265};

	double fish_count {};
	double fish_length {};

	cout << "Enter the number of fish you want to keep: ";
	cin >> fish_count;
	cout << "Enter the average fish length in inches: ";
	cin >> fish_length;
	fish_length /= inches_per_foot;

	double pond_area {fish_count * fish_length * fish_factor};
	double pond_diameter {2.0 * sqrt(pond_area/pi)};

	cout << "\nPond diameter required for " << fish_count << " fish is "
		 << std::fixed << std::setprecision(2)
		 << pond_diameter << " feet.\n";

	cout << "\n";

	int a{16}, b{66};
	cout << std::setw(5) << a << std::setw(5) << b << std::endl;
	cout << std::left << std::setw(5) << a << std::setw(5) << b << std::endl;
	cout << "a = " << std::setbase(16) << std::setw(6) << std::showbase << a
		 << "b = " << std::setw(6) << b << std::endl;
	cout << std::setw(10) << a << std::setw(10) << b << std::endl;
}
