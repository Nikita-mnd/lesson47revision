#include "main.h"
#include "util.h"
#include "logic.h"

void print(int* m, bool result, int size) {

	cout << convert(m, size) << "\n" <<
		(result == true ? "pass." : "fail.") << endl;

}

void test01() {
	int m[]{ 12, 4, 5, 7, 15, 4, 10, 17, 23, 7 };
	int size = 9;
	int expected = 10;
	int actual = find_arithmetic_mean(m, size);
	print(m, expected == actual, size);
}

void test02() {
	int m[]{ 4, 1, 56, 12, 3, 1, 5, 7, 56, 12 };
	int size = 9;
	int expected = 7;
	int actual = find_arithmetic_mean(m, size);
	print(m, expected == actual, size);
}

void test03() {
	int m[]{ 1,2,3 };
	int size = 2;
	int expected = 2;
	int actual = find_arithmetic_mean(m, size);
	print(m, expected == actual, size);
}

void test04() {
	int m[]{1, 2, 5, 1, 4, 1, 5, 1, 5};
	int size = 8;
	int expected = 3;
	int actual = find_arithmetic_mean(m, size);
	print(m, expected == actual, size);
}

void test05() {
	int m[]{5,5,3,4,5,5};
	int size = 5;
	int expected = 4;
	int actual = find_arithmetic_mean(m, size);
	print(m, expected == actual, size);
}