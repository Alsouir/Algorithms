#include <iostream>
#include <string>


int main() {
	int L;
	std::cin >> L;
	std::string text;	
	std::cin.ignore();
	std::getline(std::cin, text);
	int sizeMaxWord = 0, sizeWord = 0;
	int positionStart = 0;
	for (int i = 0; i < L; i++) {
		if (text[i] != ' ') {
			sizeWord++;
		}
		else if (text[i] == ' ' && sizeMaxWord < sizeWord) {
			sizeMaxWord = sizeWord;
			positionStart = i - sizeMaxWord;
			sizeWord = 0;
		}
		else if (sizeMaxWord >= sizeWord && text[i] == ' ') {
			sizeWord = 0;
		}
	}
	if (sizeMaxWord < sizeWord) {
		sizeMaxWord = sizeWord;
		sizeWord = 0;
		positionStart = L - sizeMaxWord;
	}
	for (int i = positionStart; i < positionStart + sizeMaxWord; i++) {
		std::cout << text[i];
	}
	std::cout << '\n' << sizeMaxWord;
	return 0;
}