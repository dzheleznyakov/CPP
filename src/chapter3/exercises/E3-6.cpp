#include <iostream>
#include <iomanip>

using std::setw;

int mainE3_6() {
	enum class Color : unsigned int {
		Red = 0xff0000,
	    Green = 0x00ff00,
		Yellow = 0xffff00,
		Purple = 0x800080,
		Blue = 0x0000ff,
		Black = 0x000000,
		White =0xffffff };

	Color yellow = Color::Yellow;
	Color purple = Color::Purple;
	Color green = Color::Green;

	std::cout << std::hex << std::setfill('0')
	          << "The code for yellow is " << setw(6) << static_cast<unsigned int>(yellow)
			  << ", for purple is " << setw(6) << static_cast<unsigned int>(purple)
			  << " and for green is " << setw(6) << static_cast<unsigned int>(green)
			  << std::endl;
}
