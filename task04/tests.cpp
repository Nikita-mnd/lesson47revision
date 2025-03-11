#include "main.h"
#include "util.h"
#include "logic.h"

void print(int* m, bool result, int size) {

	cout << convert(m, size) << "\n" <<
		(result == true ? "pass." : "fail.") << endl;

}

void test01() {
	int m[]{ -7, 2, 5, -4, -6, 11, 9 };
	int size = 6;
	string expected = "The Number of local minima: 3 The Number of local maxima: 2";
	int min = find_local_min(m, size);
	int max = find_local_max(m, size);
	string actual = local_max_and_local_min(min, max);
	cout <<max<<" "<<min<<" " << actual << endl;
	print(m, expected == actual, size);
}

void test02() {
	int m[]{ 1,1,1,1,1 };
	int size = 4;
	string expected = "The Number of local minima: 0 The Number of local maxima: 0";
	int min = find_local_min(m, size);
	int max = find_local_max(m, size);
	string actual = local_max_and_local_min(min, max);
	cout << max << " " << min << " " << actual << endl;
	print(m, expected == actual, size);
}

void test03() {
	int m[]{ 1,2 };
	int size = 1;
	string expected = "The Number of local minima: 1 The Number of local maxima: 1";
	int min = find_local_min(m, size);
	int max = find_local_max(m, size);
	string actual = local_max_and_local_min(min, max);
	cout << max << " " << min << " " << actual << endl;
	print(m, expected == actual, size);
}

void test04() {
	int m[]{ 0,0,0,0,0,1 };
	int size = 5;
	string expected = "The Number of local minima: 0 The Number of local maxima: 1";
	int min = find_local_min(m, size);
	int max = find_local_max(m, size);
	string actual = local_max_and_local_min(min, max);
	cout << max << " " << min << " " << actual << endl;
	print(m, expected == actual, size);
}