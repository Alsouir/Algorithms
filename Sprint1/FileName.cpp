#include <iostream>
#include <vector>


int func(std::vector<int> first_team, std::vector<int> second_team) {
   int max_length = 0;
   std::vector<int> row(second_team.size() + 1, 0);
   for (int i = 1; i < first_team.size() + 1; i++) {
       for (int j = 1; j < second_team.size() + 1; j++) {
           if (first_team.at(i - 1) == second_team.at(j - 1)) {
               row[j] = row[j - 1] + 1;
               if (max_length < row.at(j)) {
                   max_length = row.at(j);
               }
           }
       }
       for (const int& ch : row) {
           std::cout << ch << " ";
       }
       std::cout << std::endl;
   }
   return max_length;
}

int main() {
   int number_games;
   std::cin >> number_games;
   std::vector<int> first_team(number_games);
   for (int i = 0; i < number_games; i++) {
       int points;
       std::cin >> points;
       first_team[i] = points;
   }
   std::cin >> number_games;
   std::vector<int> second_team(number_games);
   for (int i = 0; i < number_games; i++) {
       int points;
       std::cin >> points;
       second_team[i] = points;
   }
   int max_length = 0;
   if (first_team.size() > second_team.size()) {
       max_length = func(second_team, first_team);
   } else max_length = func(first_team, second_team);
   
   
   std::cout << max_length;
   return 0;
}