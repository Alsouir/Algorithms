#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>


int main() {
	int n;
	std::cin >> n;
	//std::vector <int> id(n);
	std::map <int, int> count_id;
	for (int i = 0; i < n; i++) {
		int t;
		std::cin >> t;
		count_id[t]++;
	}
	int k;
	std::cin >> k;
	std::map <int, std::vector <int>> sort_count_id;
	for (auto i : count_id) {
		sort_count_id[i.second].push_back(i.first);
	}
	int count_print = 0;
	for (auto it = sort_count_id.rbegin(); it != sort_count_id.rend() && count_print < k; ++it) {
		std::vector<int>& vec = it->second;
		for (auto rit = vec.begin(); rit != vec.end() && count_print < k; ++rit) {
			int element = *rit;
			std::cout << element << " ";
			count_print++;
		}
	}
	return 0;
}
