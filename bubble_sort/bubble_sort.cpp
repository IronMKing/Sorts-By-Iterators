#include<iostream>
#include<vector>

template<typename ITER>
void bubble_sort(ITER start, ITER end) {
	ITER cur = start;
	while (start != end) {
		while (cur + 1 != end) {
			if (*cur > *(cur + 1)) {
				std::swap(*cur, *(cur + 1));
			}
			++cur;
		}
		end = cur;
		cur = start;
	}
}
