#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>

int main() {
   uint64_t n, k;
   std::cin >> n >> k;

   std::vector<uint64_t> points(n);
   for (int i = 0; i < n; i++) {
       std::cin >> points[i];
   }

   std::sort(points.begin(), points.end());

   uint64_t left = 1, right = points[n - 1] - points[0];
   while (left < right) {
       uint64_t length = left + (right - left) / 2;
       uint64_t calculateK = 1;
       uint64_t sectionEnd = points[0];
       for (int i = 1; i < points.size(); i++) {
           if (points[i] - sectionEnd > length) {
               calculateK++;
               sectionEnd = points[i];
           }
       }
       if (calculateK <= k) {
           right = length;
       }
       else {
           left = length + 1;
       }
   }
   std::cout << left << std::endl;
   return 0;
}
