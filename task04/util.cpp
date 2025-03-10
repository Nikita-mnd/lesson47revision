#include "util.h"
string convert(int* m, int size) {
	string s = "";
	for (int i = 0; i <= size; i++) {
		s += to_string(m[i]) + " ";
	}
	return s;
}