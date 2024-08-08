#include <iostream>
#include <vector>


int main() {
	int n;
	std::cin >> n;
	std::vector<int> weather;
	for (int i = 0; i < n; i++) {
		int temperature;
		std::cin >> temperature;
		weather.push_back(temperature);
	}
	int result = 0;
	if (n != 1) {
		if (weather[1] < weather[0]) result++;
		if (weather[n - 1] > weather[n - 2]) result++;
	}
	else result++;
	for (int i = 1; i + 1 < n; i++) {
		if (weather[i - 1] < weather[i] && weather[i + 1] < weather[i]) result++;
	}
	std::cout << result;
	return 0;
}
