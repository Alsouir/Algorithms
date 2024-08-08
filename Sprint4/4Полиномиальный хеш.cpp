#include <iostream>
#include <math.h>
#include <cstdint>

int main() {
	uint64_t a, m;
	std::string s;
	std::cin >> a >> m >> s;
	uint64_t hash = 0;
	uint64_t n = static_cast<uint64_t>(s.size());
	uint64_t pow_a = 1;
	for (int i = n - 1; i >= 0; --i) {
		hash = (hash + (s[i] * pow_a) % m) % m; 
		pow_a = (pow_a * a) % m; 
	}
	hash = hash % m;
	std::cout << hash;

	return 0;
}

// for (auto& ch : s) {
// 		hash += (uint64_t)(ch) % m * static_cast<uint64_t>(std::pow(a, n - 1) % m);
// 		n--;
// 	}