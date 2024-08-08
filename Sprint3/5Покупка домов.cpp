#include <iostream>
#include <vector>
#include <algorithm>


int main() {
	int n, k;
	std::cin >> n >> k;
	std::vector <int> prices(n);
	for (int& i : prices) {
		std::cin >> i;
	}
	std::sort(prices.begin(), prices.end());
	int result = 0, money = 0;
	for (int i : prices) {
		if (money + i <= k) {
			money += i;
			result++;
		}
		else break;
	}
	std::cout << result;
	return 0;
}
