#include <iostream>
using namespace std;

int max(int* m, int size) {
	int max = 0;
	for (int i = 1; i <= size; i++) {
		if (m[max] < m[i]) {
			max = i;
		}
	}
	return max;
}

int min(int* m, int size) {
	int min = 0;
	for (int i = 1; i <= size; i++) {
		if (m[min] < m[i]) {
			min = i;
		}
	}
	return min;
}

int sum_of_elements(int* m, int size) {
	int sum = 0;
	int start = max(m, size);
	int end = min(m, size);
	if (end < start) {
		swap(end, start);
	}
	for (int i = start; i <= end; i++) {
		sum += m[i];
	}

	return sum;
}