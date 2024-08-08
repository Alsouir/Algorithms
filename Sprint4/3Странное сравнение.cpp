#include <iostream>
#include <unordered_map> 

int main() {
	std::string str1, str2;
	std::cin >> str1 >> str2;
	int flag = 1;
	std::unordered_map <char, char> chars;
	for (size_t i = 0; i < str1.size() && str1.size() == str2.size() && flag == 1; i++) {
		if (chars[str1[i]] == '\0') {
			for (auto& item : chars) {
				if (item.second == str2[i]) {
					flag = 0;
				}
			}
			chars[str1[i]] = str2[i];
		}
		else if (str2[i] != chars[str1[i]]) {
			flag = 0;
		}
	}
	if (flag == 0 || str1.size() != str2.size()) std::cout << "NO";
	else std::cout << "YES";
	return 0;
}
