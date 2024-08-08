#include <iostream>
#include <string>


int main() {
	std::string s, t;
	std::cin >> s >> t;
	int j = 0, n = 0;
	for (int i = 0; i < static_cast<int>(s.size()); i++) {
		while (j < static_cast<int>(t.size())) {
			if (s[i] == t[j]) {
				n++;
				j++;
				break;
			}
			j++;
		}
	}
	if (n == static_cast<int>(s.size())) {
		std::cout << "True";
	}
	else {
		std::cout << "False";
	}
	return 0;
}