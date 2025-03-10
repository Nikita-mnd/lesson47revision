#include "main.h"

int find_local_max(int* m, int size) {
	int local_max = 0;
	for (int i = 0;i <= size; i++) {
		if (i == 0) {
			local_max += m[i] > m[i + 1] ? 1 : 0;
		}
		if (i == size) {
			local_max += m[i] > m[i - 1] ? 1 : 0;
		} else

		if (m[i - 1]< m[i] && m[i]>m[i + 1]) {
			local_max += 1;
		}

	}
	return local_max;
}

int find_local_min(int* m, int size) {
	int local_min = 0;
	for (int i = 0;i <= size; i++) {
		if (i == 0) {
			local_min += m[i] < m[i + 1] ? 1 : 0;
		}
		if (i == size) {
			local_min += m[i] < m[i - 1] ? 1 : 0;
		} else

		if (m[i - 1]> m[i] && m[i]<m[i + 1]) {
			local_min += 1;
		}

	}
	return local_min;
}

string local_max_and_local_min(int min, int max) {
	 string result = "The Number of local minima: " + to_string(min) +
		 " The Number of local maxima: " + to_string(max) + "";
	 return result;
}