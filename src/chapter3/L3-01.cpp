#include<iostream>
#include<iomanip>

using std::setw;

int mainL3_01() {
	unsigned int red {0XFF0000U};
	unsigned int white {0XFFFFFFU};

	std::cout << std::hex
			  << std::setfill('0');

	std::cout << "Try out bitwise AND and OR operators:";
	std::cout << "\nInitial value red = " << setw(8) << red;
	std::cout << "\nComplement   ~red = " << setw(8) << ~red;

	std::cout << "\nInitial value white = " << setw(8) << white;
	std::cout << "\nComplement   ~white = " << setw(8) << ~white;

	std::cout << "\nBitwise AND red & white = " << setw(8) << (red & white);
	std::cout << "\nBitwise  OR red | white = " << setw(8) << (red | white);

	std::cout << "\n\nNow try successive exclusive OR operations:";
	unsigned int mask {red ^ white};
	std::cout << "\nmask = red ^ white = " << setw(8) << mask;
	std::cout << "\n        mask ^ red = " << setw(8) << (mask ^ red);
	std::cout << "\n      mask ^ white = " << setw(8) << (mask ^ white);

	unsigned int flags {0xFF};
	unsigned int bit1mask {0x1};
	unsigned int bit6mask {0x20};
	unsigned int bit20mask {0x80000};

	std::cout << "\n\nUse ask to select or set a particular flat bit:";
	std::cout << "\nSelect bit 1 from flags   : " << setw(8) << (flags & bit1mask);
	std::cout << "\nSelect bit 6 from flags   : " << setw(8) << (flags & bit6mask);
	std::cout << "\nSwitch off bit 6 in flags : " << setw(8) << (flags &= ~bit6mask);
	std::cout << "\nSwitch on bit 20 in flags : " << setw(8) << (flags |= bit20mask)
			  << std::endl;
}
