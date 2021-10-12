#include <iostream>

void increment(int &a) {
	a = a + 1;
	std::cout << "a increment " << a << std::endl;
}

void swap(int& a, int& b) {
	int t = a;
	a = b;
	b = t;
}

int main() {
	int q = 3;
	int r = 5;
	swap(q, r);
	std::cout << "q" << q << std::endl;
	std::cout << "r" << r << std::endl;
	increment(q);
	std::cout << "q in main " << q << std::endl;
}