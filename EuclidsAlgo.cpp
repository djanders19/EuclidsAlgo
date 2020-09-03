#include <iostream>

int main() {
	// get first number from user
	std::cout << "Input a number m: ";
	int m{ };
	std::cin >> m;

	// get 2nd number from user
	std::cout << "Input a number n: ";
	int n{ };
	std::cin >> n;

	// compute remainder of quotient
	int remainder = m % n;

	/*Implements Euclid's algorithm to find GCD of m and n.
	General form of this algo is: while m % n != 0,
	m <- n, n <- r. If m % n = 0, n is the GCD of
	initial m and n*/
	while (remainder) {
		m = n;
		n = remainder;
		remainder = m % n;
	}

	std::cout << "the GCD of m and n is: " << n;

	return 0;
}