#include <iostream>

int mainE3_3() {
	unsigned int k {430U};
	unsigned int j {(k >> 4) & ~(~0 << 3)};
	std::cout << j << std::endl;
}
