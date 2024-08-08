#include <iostream>
#include <string>
#include <map>

int main() {
	std::string s, t;
	std::cin >> s >> t;
	std::map <char, int> chars;
	for (auto i : s) {
		if (chars.count(i) == 0) {
			chars[i] = 1;
		}
		else {
			chars[i]++;
		}
	}
	char findChar;
	for (auto i : t) {
		if (chars.count(i) != 0) {
			chars[i]--;
			if (chars[i] == 0) {
				chars.erase(i);
			}
		}
		else {
			std::cout << i;
			break;
		}
	}

	return 0;
}