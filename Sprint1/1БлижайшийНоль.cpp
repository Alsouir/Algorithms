#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int n;
	std::cin >> n;
	std::vector <int> numberHouse;
	std::vector <int> zero;
	for (int i = 0; i < n; i++) {
		int num;
		std::cin >> num;
		numberHouse.push_back(num);
		if (num == 0) zero.push_back(i);
	}
	std::vector <int> distance (n, 0);
	for (int i = 0; i < zero.size(); i++) {
		int j;
		if (i == 0) j = 0;
		else j = zero[i] - ( zero[i] - zero[i - 1]) / 2 ;
		int t = 0;
		for (int k = zero[i]; k >= j ; k--) {
			distance[k] = t;
			t++;
		}

		if (i == zero.size() - 1) j = n - 1;
		else j = zero[i + 1];
		t = 0;
		for (int k = zero[i]; j >= k; k++) {
			distance[k] = t;
			t++;
		}
	}


	for (int i = 0; i < n; i++) {
		std::cout << distance[i] << " ";
	}

	return 0;
}

