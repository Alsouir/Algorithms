#include <iostream>
#include <vector>

void bubble(std::vector <int>& sort_vector) {
	int flag_print = 1;
	for (int i = 0; i < sort_vector.size(); i++) {
		int flag = 0;
		for (int j = 0; j < sort_vector.size() - 1; j++) {
			if (sort_vector[j] > sort_vector[j + 1]) {
				int k = sort_vector[j];
				sort_vector[j] = sort_vector[j + 1];
				sort_vector[j + 1] = k;
				flag = 1;
			}
		}
		if (flag_print == 1 && flag == 0) {
			for (int j = 0; j < sort_vector.size(); j++) {
				std::cout << sort_vector[j] << ' ';
				flag = 0;
			}
		}
		if (flag == 0) break;
		for (int j = 0; j < sort_vector.size(); j++) {
			std::cout << sort_vector[j] << ' ';
			flag = 0;
			flag_print = 0;
		}
		std::cout << '\n';
		
	}

}

int main() {
	int n;
	std::cin >> n;
	std::vector <int> sort_vector(n);
	for (auto& i : sort_vector) {
		std::cin >> i;
	}
	bubble(sort_vector);
	return 0;
}
