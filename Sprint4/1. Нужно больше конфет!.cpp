#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdint>

int main()
{
   int n;
   std::cin >> n;

   std::vector<int> candies(n);
   for (int i = 0; i < n; i++) {
       std::cin >> candies[i];
   }
   sort(candies.begin(), candies.end());

   uint64_t left = 0, right = 0;
   for (int i = 1; i < n - 1; i++) {
       right += candies[n - 1] - candies[i];
   }
   uint64_t minAddedCandies = right;
   for (int i = 1; i < n; i++) {
       left += (candies[i] - candies[i - 1]) * i;
       right -= (candies[n - 1] - candies[i]);
       if (minAddedCandies > right + left) {
           minAddedCandies = right + left;
       }
   }

   std::cout << minAddedCandies;
   return 0;

}


