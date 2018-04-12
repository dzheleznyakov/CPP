#include <iostream>
#include <iomanip>
#include <locale>
#include <memory>
#include <vector>

using std::vector;
using std::shared_ptr;
using Class = std::vector<unsigned int>;
using PClass = shared_ptr<Class>;
using PClasses = vector<PClass>;

int mainE6_5() {
	const size_t max_students {50};
	auto pclasses = std::make_shared<PClasses>();
	unsigned int age;
	PClass pclass;
	char answer {};
	unsigned int class_count {};

	do {
		pclass = std::make_shared<vector<unsigned int>>();
		pclasses->push_back(pclass);

		size_t count {};
		std::cout << "Enter ages of students for class " << ++class_count << " separated by white spaces; enter 0 to finish: ";

		do {
			std::cin >> age;
			if (age == 0 || count > max_students)
				break;
			pclass->push_back(age);
		} while (true);

		std::cout << "Do you wish to enter ages for another class (y/n)? ";
		std::cin >> answer;
	} while (tolower(answer) != 'n');

	std::cout << std::endl;
	const size_t perline {5};
	for (PClasses::size_type i {}; i < pclasses->size(); i++) {
		std::cout << "Student ages for class " << (i + 1) << ":\n";
		PClass a_class {pclasses->at(i)};
		unsigned int sum {};
		for (Class::size_type j {}; j < a_class->size(); j++) {
			std::cout << std::setw(5) << a_class->at(j);
			sum += a_class->at(j);
			if (j + 1 < a_class->size() && (j + 1) % perline == 0)
				std::cout << std::endl;
		}
		double avg = static_cast<double>(sum) / static_cast<double>(a_class->size());
		std::cout << "\nThe average age for class " << (i + 1) << " is "
				  << std::fixed << std::setprecision(2) << avg << std::endl << std::endl;
	}
}
