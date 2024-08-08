#include <iostream>
#include <vector>
#include <algorithm>


int main() {
	int n;
	std::cin >> n;
	std::vector <int> sides(n);
	for (int& i : sides) {
		std::cin >> i;
	}
	std::sort(sides.rbegin(), sides.rend());
	int result = 0;
	for (int i = 0; i < n - 2; i++) {
		if (sides[i] < sides[i + 1] + sides[i + 2]) {
			result = sides[i] + sides[i + 1] + sides[i + 2];
			break;
		}
	}
	std::cout << result;
	return 0;
}
