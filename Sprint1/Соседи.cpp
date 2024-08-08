#include <iostream>
#include <vector>
#include<algorithm>

int main() {
	int m, n;
	std::cin >> n >> m;
	std::vector<std::vector<int>> matrix (n, std::vector<int>(m));
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int num;
			std::cin >> num;
			matrix[i][j] = num;
		}
	}
	int x, y;
	std::cin >> x >> y;
	std::vector<int> result;
	if (x - 1 >= 0 ) {
		result.push_back(matrix[x - 1][y]);
	}
	if (x + 1 < n) result.push_back(matrix[x + 1][y]);
	if (y + 1 < m) result.push_back(matrix[x][y + 1]);
	if (y - 1 >= 0) result.push_back(matrix[x][y - 1]);
	std::sort(result.begin(), result.end());
	for (size_t i = 0; i < result.size(); i++) {
		std::cout << result[i] << " ";
	}


	return 0;
}