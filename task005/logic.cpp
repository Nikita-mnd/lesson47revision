#include "main.h"

int* sort(int a, int b, string direction, int* m, int size) {
	if (direction != "a" && direction != "d") {
		return 0;
	} else
	if (a < b) {
		swap(a, b);
	}
	if (direction == "a") {
		for (int i = a + 1; i < b;i++) {

			for (int j = a + 1; j < b;j++) {
				if (m[j] > m[j + 1]) {
					swap(m[j], m[j + 1]);
				}
			}

		}
	}
	else {
		for (int i = a + 1; i < b;i++) {

			for (int j = a + 1; j < b;j++) {
				if (m[j] < m[j + 1]) {
					swap(m[j], m[j + 1]);
				}
			}

		}
	}
	return m;
}