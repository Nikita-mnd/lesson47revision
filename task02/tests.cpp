#include "main.h"
#include "util.h"
#include "logic.h"

void print(int* m, bool result, int size) {

	cout << convert(m, size) << "\n" <<
		(result == true ? "pass." : "fail.") << endl;

}

void test01() {
	int m[]{ 23, 0 ,45, -5 ,12, 0 ,-2, 30, 0, 64 };
	int size = 9;
	int expected = 23;
	int actual = find_arithmetic_mean( m,  size);
	print(m, expected == actual, size);
}

void test02() {
	int m[]{ 4, 0, 56, 12, -3, 0, 5, -7, 91, 12 };
	int size = 9;
	int expected = 21;
	int actual = find_arithmetic_mean(m, size);
	print(m, expected == actual, size);
}

void test03() {
	int m[]{4,5,6,7,8,9,0,0,0,-9,-8,-7};
	int size = 11;
	int expected = 1;
	int actual = find_arithmetic_mean(m, size);
	print(m, expected == actual, size);
}

void test04() {
	int m[]{0,0,0,0,1,0,0,0};
	int size = 7;
	int expected = 1;
	int actual = find_arithmetic_mean(m, size);
	print(m, expected == actual, size);
}

void test05() {
	int m[]{1,1,1,1,0,1,1,1};
	int size = 7;
	int expected = 1;
	int actual = find_arithmetic_mean(m, size);
	print(m, expected == actual, size);
}