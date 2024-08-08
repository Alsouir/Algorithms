#include <iostream>


int main() {
	int number, i = 2;
	std::cin >> number;
	int copy = number;
	while (number != 1 && i * i <= number) {
		if (number % i == 0) {
			number = number / i;
			std::cout << i << " ";
		}
		else {
			i++;
		}
	} 
	std::cout << number;
	return 0;
}