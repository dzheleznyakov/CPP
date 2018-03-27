#include <iostream>
#include <iomanip>

using std::setw;

int mainL3_02() {
	enum class Day { Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday}
		yesterday {Day::Monday}, today {Day::Tuesday};
	Day poets_day {Day::Friday};

	enum class Punctuation : char { Comma = ',', Exclamation = '!', Question = '?'};
	Punctuation ch {Punctuation::Comma};

	std::cout << "yesterday's value is " << static_cast<int>(yesterday)
			  << static_cast<char>(ch) << " but poets_day's is " << static_cast<int>(poets_day)
			  << static_cast<char>(Punctuation::Exclamation) << std::endl;
	today = Day::Thursday;
	ch = Punctuation::Question;
	Day tomorrow = poets_day;

	std::cout << "Is today's value(" << static_cast<int>(today)
			  << ") the same as poets_day(" << static_cast<int>(poets_day)
			  << ")" << static_cast<char>(ch) << std::endl;

//	ch = tomorrow;
//	tomorrow = Friday;
//	today = 6;
}
