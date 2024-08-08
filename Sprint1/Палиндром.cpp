#include <iostream>
#include <string>

int main() {
	std::string sentence;
	std::getline(std::cin, sentence);
	int right = static_cast<int>(sentence.size()) - 1;
	bool result = true;
	for (int i = 0; i < sentence.size() && right != i; ) {
		if ((tolower(sentence[i]) >= 'a' && tolower(sentence[i]) <= 'z') || (sentence[i] >= '0' && sentence[i] <= '9')) {
			if (tolower(sentence[right]) >= 'a' && tolower(sentence[right]) <= 'z' || sentence[right] >= '0' && sentence[right] <= '9') {
				if (tolower(sentence[i]) != tolower(sentence[right])) {
					result = false;
					break;
				}
				right--;
				i++;
			} else right--;
		} else i++;
	}
	if (result) {
		std::cout << "True";
	} else std::cout << "False";

	return 0;
}