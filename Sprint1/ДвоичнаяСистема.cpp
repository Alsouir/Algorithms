#include <iostream>
#include <string>

std::string binarySum(std::string num1, std::string num2) {
	int help = 0;
	std::string result;
	int diffrenceSize = num1.size() - num2.size();
	for (int i = num2.size() - 1; i >= 0; i--) {
		if (num2[i] == '0' && num1[i + diffrenceSize] == '0' && help == 0 ) {
			result.push_back('0');
		} 
		else if (num2[i] == '0' && num1[i + diffrenceSize] == '0' && help == 1 || num2[i] == '1' && num1[i + diffrenceSize] == '0' && help == 0 || num2[i] == '0' && num1[i + diffrenceSize] == '1' && help == 0) {
			result.push_back('1');
			help = 0;
		}
		else if (num2[i] == '1' && num1[i + diffrenceSize] == '1' && help == 0) {
			result.push_back('0');
			help = 1;
		}
		else if (num2[i] == '1' && num1[i + diffrenceSize] == '1' && help == 1) {
			result.push_back('1');
			help = 1;
		} 
		else if (num2[i] == '1' && num1[i + diffrenceSize] == '0' && help == 1 || num2[i] == '0' && num1[i + diffrenceSize] == '1' && help == 1) {
			result.push_back('0');
			help = 1;
		}
	}
	if (help == 1 && diffrenceSize == 0) {
		result.push_back('1');
		help = 0;
	}
	if (diffrenceSize != 0 ) {
		for (int i = diffrenceSize - 1; i >= 0; i--) {
			if (help == 0) result.push_back(num1[i]);
			else if (help == 1 && num1[i] == '0') {
				result.push_back('1');
				help = 0;
			}
			else if (help == 1 && num1[i] == '1') {
				result.push_back('0');
			}
		}
	}
	if (help == 1) {
		result.push_back('1');
	}
	return result;
}

int main() {
	std::string num1, num2, sum;
	std::cin >> num1 >> num2;
	if (num1.size() > num2.size()) {
		sum = binarySum(num1, num2);
	}
	else {
		sum = binarySum(num2, num1);
	}
	for (int i = sum.size() - 1; i >= 0; i--) {
		std::cout << sum[i];
	}

	return 0;
}