#include <iostream>
#include <unordered_map>
#include <string>
#include <vector>

int main() {
	std::unordered_map <std::string, int> count_krugki;
	std::vector <std::string> result;
	int n;
	std::cin >> n;
	std::string name;
	std::getline(std::cin, name);
	for (int i = 0; i < n; i++) {
		
		std::getline(std::cin, name);
		if (count_krugki[name] == 0) {
			result.push_back(name);
		}
		count_krugki[name]++;
	}
	for (auto& item : result) {
		std::cout << item << '\n';
	}
	return 0;
}