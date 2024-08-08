#include <iostream>
#include <stdint.h>
#include <map>
#include <vector>

void calculate_hash(const std::string& sequance, uint64_t a, uint64_t m, std::vector<uint64_t>& hashes_value) {
   uint64_t hash = 0;
   for (const char& symbol : sequance) {
       hash *= a;
       hash += symbol;
       hash %= m;
       hashes_value.push_back(hash);
   }
}

int main() {
   std::string str;
   uint64_t a, m;
   std::cin >> a >> m >> str;
   std::vector<uint64_t> hashes_value;
   calculate_hash(str, a, m, hashes_value);
   int t, l, r;
   std::cin >> t;
   for (int i = 0; i < t; i++) {
       std::cin >> l >> r;
       uint64_t result = (hashes_value[r-1] - hashes_value[l-1] * po);
       std::cout << result << '\n';
   }
   return 0;
}