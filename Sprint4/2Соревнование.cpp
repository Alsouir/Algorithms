#include <iostream>
#include <unordered_map>

int main() {
	int n;
	std::cin >> n;
	std::unordered_map <int, std::pair<int, int>> count_play;
	int count = 0, max = 0;
	count_play[0] = { 0, 0 };
	for (int i = 1; i <= n; i++) {
		int point;
		std::cin >> point;
		if (point == 0) count--;
		else count++;
		if (count_play.count(count) > 0) {
			count_play[count].second = i;
		}
		else {
			count_play[count] = { i , i };

		}
	}
	for (auto& item : count_play) {
		if (item.second.second - item.second.first > max) {
			max = item.second.second - item.second.first;
		}
	}
	std::cout << max;
	return 0;
}
