#include<iostream>
#include<vector>
#include"selection_sort.cpp"


int main() {
	std::vector<int> vec = { 9,8,7,6,5,4,3,2,1 };
	selection_sort(vec.begin(), vec.end());
	for (int i = 0; i < vec.size(); ++i) {
		std::cout << vec[i];
	}
	
}