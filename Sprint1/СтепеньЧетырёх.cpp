#include <iostream>


int main() {
	int number;
	std::cin >> number;
	int copyNum = number;
	int remains = number % 4;
	while (number / 4 != 0) {
		if (number % 4 != 0) {
			break;
		}
		remains = number % 4;
		number = number / 4;
	}
	if (remains == 0 && number == 1 || copyNum == 1) std::cout << "True";
	else std::cout << "False";
	return 0;
}