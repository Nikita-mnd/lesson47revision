#include "main.h"
int find_zero_elements(int* m, int size) {
	int zero_element = 0;
	for (int i = 0; i <= size; i++) {
		if (m[i] == 0) {
			zero_element += 1;
		}
	}
	return zero_element;
}
int find_arithmetic_mean(int* m, int size) {
	int zero_element = find_zero_elements(m, size);
	int sum = 0;
	for (int i = 0; i <= size; i++) {
		if (m[i] != 0) {
			sum += m[i];
		}
	}

	return sum / (size - zero_element + 1);
}