#include <iostream>
#include <iomanip>

int mainL6_04() {
	const size_t max {100};
	long primes[max] {2L, 3L, 5L};
	size_t count {3};
	long trial {5};
	bool isPrime {true};

	do {
		trial += 2;
		size_t i {};

		do {
			isPrime = trial % *(primes + i) > 0;
		} while (++i < count && isPrime);

		if (isPrime) {
			*(primes + count++) = trial;
		}
	} while (count < max);

	std::cout << "The first " << max << " primes are:" << std::endl;
	for (size_t i {}; i < max; ++i) {
		std::cout << std::setw(7) << *(primes + i);
		if ((i + 1) % 10 == 0)
			std::cout << std::endl;
	}
	std::cout << std::endl;
}
