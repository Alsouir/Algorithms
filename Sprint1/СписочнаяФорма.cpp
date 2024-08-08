#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> IntToVector(int number2) {
	std::vector<int> num2;
	while (number2 / 10 != 0) {
		num2.push_back(number2 % 10);
		number2 = number2 / 10;
	}
	num2.push_back(number2);
	std::reverse(num2.begin(), num2.end());
	return num2;
}

std::vector<int> summa(const std::vector<int>& num1, const std::vector<int>& num2) {
	std::vector<int> result;
	int flag = 0;
	
	
	for (int i = static_cast<int>(num2.size()) - 1; i >= 0; i--) {
		if (num2[i] + num1[i + num1.size() - num2.size()] < 10 && flag == 0) {
			result.push_back(num2[i] + num1[i + num1.size() - num2.size()]);
			flag = 0;
		} else if (num2[i] + num1[i + num1.size() - num2.size()] < 9 && flag == 1) {
			result.push_back(num2[i] + num1[i + num1.size() - num2.size()] + 1);
			flag = 0;
		}
		else if (num2[i] + num1[i + num1.size() - num2.size()] >= 9 && flag == 1) {
			result.push_back((num2[i] + num1[i + num1.size() - num2.size()] + 1) % 10);
			flag = 1;
		}
		else if (num2[i] + num1[i + num1.size() - num2.size()] > 9 && flag == 0) {
			result.push_back((num2[i] + num1[i + num1.size() - num2.size()]) % 10);
			flag = 1;
		}
		
	}
	for (int i = static_cast<int>(num1.size()) - 1 - static_cast<int>(num2.size()); i >= 0; i--) {
		if (flag == 0) {
			result.push_back(num1[i]);
		}
		else if (flag == 1 && num1[i] < 9) {
			result.push_back(num1[i] + 1);
			flag = 0;
		}
		else if (flag == 1 && num1[i] == 9) {
			result.push_back((num1[i] + 1) % 10);
			flag = 1;
		}
	}
	if (flag == 1) result.push_back(1);
	return result;
}

int main() {
	int count, num2;
	std::cin >> count;
	std::vector<int> number1;
	for (int i = 0; i < count; i++) {
		int num;
		std::cin >> num;
		number1.push_back(num);
	}
	std::cin >> num2;
	std::vector<int> number2 = IntToVector(num2);
	std::vector<int> result;
	if (number1.size() > number2.size())  result = summa(number1, number2);
	else result = summa(number2, number1);
	for (int i = static_cast<int>(result.size()) - 1; i >= 0 ; i--) {
		std::cout << result[i] << " ";
	}
	
	return 0;
}