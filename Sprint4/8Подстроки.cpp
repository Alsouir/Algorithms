#include <iostream>
#include <unordered_set>
#include <algorithm>

int maxDiffStr(const std::string& str) {
	int result = 0, maxResult = 0;
	std::unordered_set <char> chars;
	for (const auto& ch : str) {
		auto it = std::find(chars.begin(), chars.end(), ch);
		if (it != chars.end()) {
			if (maxResult < chars.size()) maxResult = chars.size();
			chars.erase(it, chars.end());
		}
		chars.insert(ch);
	}
	if (maxResult < chars.size()) maxResult = chars.size();
	return maxResult;
}

int main() {
	std::string str;
	std::cin >> str;
	std::cout << maxDiffStr(str);
	return 0;
}