#include <iostream> 
#include <string>
#include <vector>

void combinations(std::string n,std::string message, int size_n) {
	if (size_n == 0) {
		std::cout << message << ' ';
	}
	else {
		if (n[n.size() - size_n] == '2') {
			combinations(n, message + "a", size_n - 1);
			combinations(n, message + "b", size_n - 1);
			combinations(n, message + "c", size_n - 1);
		} else if (n[n.size() - size_n] == '3') {
			combinations(n, message + "d", size_n - 1);
			combinations(n, message + "e", size_n - 1);
			combinations(n, message + "f", size_n - 1);
		}
		else if (n[n.size() - size_n] == '4') {
			combinations(n, message + "g", size_n - 1);
			combinations(n, message + "h", size_n - 1);
			combinations(n, message + "i", size_n - 1);
		}
		else if (n[n.size() - size_n] == '5') {
			combinations(n, message + "j", size_n - 1);
			combinations(n, message + "k", size_n - 1);
			combinations(n, message + "l", size_n - 1);
		}
		else if (n[n.size() - size_n] == '6') {
			combinations(n, message + "m", size_n - 1);
			combinations(n, message + "n", size_n - 1);
			combinations(n, message + "o", size_n - 1);
		}
		else if (n[n.size() - size_n] == '7') {
			combinations(n, message + "p", size_n - 1);
			combinations(n, message + "q", size_n - 1);
			combinations(n, message + "r", size_n - 1);
			combinations(n, message + "s", size_n - 1);
		}
		else if (n[n.size() - size_n] == '8') {
			combinations(n, message + "t", size_n - 1);
			combinations(n, message + "u", size_n - 1);
			combinations(n, message + "v", size_n - 1);
		}
		else if (n[n.size() - size_n] == '9') {
			combinations(n, message + "w", size_n - 1);
			combinations(n, message + "x", size_n - 1);
			combinations(n, message + "y", size_n - 1);
			combinations(n, message + "z", size_n - 1);
		}
		
	}

}

int main() {
	std::string n;
	std::cin >> n;
	combinations(n, "", n.size());
	return 0;
}