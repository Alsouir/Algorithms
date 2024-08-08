#include <iostream> 
#include <string>

void brackets(int n,std::string prefix, int open_brackets, int close_brackets, int t) {
	if (n == 0) {
		std::cout << prefix << '\n';
	}
	else {
		if (open_brackets < t) {
			brackets(n - 1, prefix + '(', open_brackets+1, close_brackets, t);
		}
		if (open_brackets > close_brackets && close_brackets < t) {
			brackets(n - 1, prefix + ')', open_brackets, close_brackets+1, t);
		}
	}

}

int main() {
	int n;
	std::cin >> n;
	brackets(n * 2, "", 0, 0, n);
	return 0;
}