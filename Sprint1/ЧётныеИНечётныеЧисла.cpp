#include <iostream>
#include <math.h>

int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	if ((abs(a) % 2 == 0 && abs(b) % 2 == 0 && abs(c) % 2 == 0) || (abs(a) % 2 == 1 && abs(b) % 2 == 1 && abs(c) % 2 == 1)) {
		std::cout << "WIN";
	}
	else {
		std::cout << "FAIL";
	}
	return 0;
}