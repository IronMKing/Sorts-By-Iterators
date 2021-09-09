#include<iostream>
#include<vector>

template<typename ITER>
void selection_sort(ITER start,ITER end) {
	ITER pos = start;
	ITER min = start;
	while (start != end) {
		while (pos != end) {
			if (*pos < *min) {
				min = pos;
			}
			++pos;
		}
		std::swap(*start, *min);
		++start;
		pos = start;
		min = start;
	}
}
