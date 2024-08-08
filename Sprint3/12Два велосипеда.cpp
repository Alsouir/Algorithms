#include <iostream>
#include <vector>

int find_day(const std::vector <int>& capital, const int& s) {
	int right = capital.size();
	int left = 0;
	if (capital[right - 1] < s) {
		return -1;
	}
	int i = (right - left) / 2;

	while (i != 0 && i != capital.size() - 1) {
		if (capital[i] >= s && capital[i - 1] < s) {
			return i + 1;
		}
		if (capital[i] >= s) {
			right = i;		
			i = (right - left) / 2;
		}
		else if (capital[i] < s) {
			left = i;
			i = i  + (right - left) / 2;
		}
	}
	return i + 1;
}

int main() {
	int n, s;
	std::cin >> n;
	std::vector <int> capital(n);
	for (auto& i : capital) {
		std::cin >> i;
	}
	std::cin >> s;
	std::cout << find_day(capital, s) << ' ' << find_day(capital, s * 2);
	return 0;
}