#include <iostream>
#include <vector>
#include <map>

int main() {
	int k;
	std::cin >> k;
	std::map<int, int> field;
	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			char t;
			std::cin >> t;
			if (t != '.' && field.count(t) == 0) field[t] = 1;
			else if (t != '.' && field.count(t) != 0) field[t]++;
		}
	}
	int result = 0;
	for (const auto iter : field) {
		if (iter.second <= k * 2) {
			result++;
		}
	}
	std::cout << result;
	return 0;
}