#include <iostream>
#include <vector>
#include <algorithm>


int main() {
	int n;
	std::cin >> n;
	std::vector <int> colors(3);
	for (int i = 0; i < n; i++) {
		int color;
		std::cin >> color;
		colors[color]++;
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < colors[i]; j++) {
			std::cout << i << " ";
		}
	}
	
	return 0;
}
