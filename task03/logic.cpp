#include "main.h"

int max(int* m, int size) {
	int max = m[0];
	for (int i = 0; i <= size; i++) {
		
		if (max < m[i]) {
			max = m[i];
		}
	}
	return max;
}

int min(int* m, int size) {
	int min = m[0];
	for (int i = 1; i <= size; i++) {
		
		if (min > m[i]) {
			min = m[i];
		}
	}
	return min;
}

int find_arithmetic_mean(int* m, int size) {
	int max_number = max(m, size);
	int min_number = min(m, size);
	int sum = 0;
	for (int i = 0; i <= size; i++) {
		if (m[i] == max_number|| m[i] == min_number) {
			sum += 0;
		}else
		sum += m[i];
	}
	cout << sum / (size  ) << endl;
	return sum / (size - 1);
}