#include <iostream>
#include <vector>
#include <algorithm>

int count_joy_kids(std::vector <int>& kids, std::vector <int>& biscuits) {
	int result = 0;
	int j = 0;
	for (int i = 0; i < kids.size() && j < biscuits.size(); i++) {
		for (; j < biscuits.size();) {
			if (kids[i] <= biscuits[j]) {
				result++;
				j++;
				break;
			}
			j++;
		}
	}
	return result;
}

int main() {
	int n, m;
	std::cin >> n;
	std::vector <int> kids(n);
	for (int& i : kids) {
		std::cin >> i;
	}
	std::cin >> m;
	std::vector <int> biscuits(m);
	for (int& i : biscuits) {
		std::cin >> i;
	}
	std::sort(kids.begin(), kids.end());
	std::sort(biscuits.begin(), biscuits.end());
	std::cout << count_joy_kids(kids, biscuits);
	return 0;
}
