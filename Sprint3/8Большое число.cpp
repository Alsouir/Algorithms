#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;
	std::vector <std::string> numbers(n);
	for (auto& i : numbers) {
		std::cin >> i;
	}
	std::sort(numbers.begin(), numbers.end(), [](std::string a, std::string b) {
		return a + b > b + a;
		});
	for (auto& i : numbers) {
		std::cout << i;
	}
	return 0;
}