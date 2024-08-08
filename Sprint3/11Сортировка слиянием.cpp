#include <iostream>
#include <vector>
#include <cassert>


using Iterator = std::vector<int>::iterator;
using CIterator = std::vector<int>::const_iterator;

std::vector<int> merge(
	CIterator left_begin, CIterator left_end,
	CIterator right_begin, CIterator right_end) {
	std::vector<int> result;
	while (left_begin != left_end || right_begin != right_end) {
		if (*left_begin <= *right_begin && left_begin != left_end) {
			result.push_back(*left_begin);
			++left_begin;
		}
		else {
			result.push_back(*right_begin);
			++right_begin;
		}
	}
	while (left_begin != left_end) {
		result.push_back(*left_begin);
		++left_begin;
	}
	while (right_begin != right_end) {
		result.push_back(*right_begin);
		++right_begin;
	}
	return result;
}

void merge_sort(Iterator begin, Iterator end) {
	int length = end - begin;
	if (length <= 1) {
		return;  
	}
	merge_sort(begin, begin + length / 2);
	merge_sort(begin + length / 2, end );
	std::vector<int> result = merge(begin,  begin + length / 2, begin + length / 2, end);
	std::copy(result.begin(), result.end(), begin);
}

void test_merge_sort() {
	std::vector<int> a = { 1,  2, 4 };
	std::vector<int> b = { 1, 2, 10  };
	std::vector<int> c = merge(a.cbegin(), a.cend(), b.cbegin(), b.cend());
	std::vector<int> expected = { 1, 1, 2, 2, 4, 10 };
	assert(c == expected);
	std::vector<int> d = { 1, 4, 2, 10, 1, 2 };
	std::vector<int> sorted = { 1, 1, 2, 2, 4, 10 };
	merge_sort(d.begin(), d.end());
	assert(d == sorted);
}

int main() {
	test_merge_sort();
	return 0;
}

//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//vector<int> factorial(int n) {
//    vector<int> result(1, 1);
//    for (int i = 2; i <= n; i++) {
//        int carry = 0;
//        for (int j = 0; j < result.size(); j++) {
//            int product = result[j] * i + carry;
//            result[j] = product % 10;
//            carry = product / 10;
//        }
//        while (carry) {
//            result.push_back(carry % 10);
//            carry /= 10;
//        }
//    }
//    reverse(result.begin(), result.end());
//    return result;
//}
//
//int main() {
//    int n = 10;
//    vector<int> result = factorial(n);
//    cout << "Factorial of " << n << " is: ";
//    for (int i = 0; i < result.size(); i++) {
//        cout << result[i];
//    }
//    cout << endl;
//    return 0;
//}
