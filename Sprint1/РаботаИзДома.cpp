#include<iostream>
#include<vector>


int main() {
	int number;
	std::cin >> number;
	std::vector<int> binaries;
	while (number / 2 != 0) {
		binaries.push_back(number % 2);
		number = number / 2;
	}
	binaries.push_back(number);
	for (int i = binaries.size() - 1; i >= 0; i--) {
		std::cout << binaries[i];
	}

	return 0;
}