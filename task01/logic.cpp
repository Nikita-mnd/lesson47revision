#include <iostream>
using namespace std;

int max(int* m, int size) {
	int max = 0;
	for (int i = 0; i <= size; i++) {
		int num = m[i];
		if (num < 0) {
			 num *= -1;
		}
		if (m[max] <num) {
			max = i;
		}
	}
	return max;
}

int min(int* m, int size) {
	int min = 0;
	for (int i = 1; i <= size; i++) {
		int num = m[i];
		if (num < 0) {
			 num *= -1;
		}
		if (m[min] > num) {
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
	for (int i = start + 1; i < end; i++) {
		sum += m[i];
	}
	cout << sum<<" "<<start << " " << end << endl;
	return sum;
}