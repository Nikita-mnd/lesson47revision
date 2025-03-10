#include <iostream>
#include "logic.h"
using namespace std;

void print(int* m, bool result, int size) {

	cout << convert(m, size) << "\n" <<
		(result == true ? "pass." : "fail.") << endl;

}

void test01() {
	int m[]{ -1,2,-3,4,-5,6,-7,8,-9,10 };
	int size = 9;
	int expected = -4;
	int actual = sum_of_elements(m, size);
	print(m, expected == actual, size);
}

void test02() {
	int m[]{7,5,1};
	int size = 2;
	int expected = 5;
	int actual = sum_of_elements(m, size);
	print(m, expected == actual, size);
}

void test03() {
	int m[]{0,0,0,0};
	int size = 3;
	int expected = 0;
	int actual = sum_of_elements(m, size);
	print(m, expected == actual, size);
}

void test04() {
	int m[]{1,1,1,1,1};
	int size = 4;
	int expected = 0;
	int actual = sum_of_elements(m, size);
	print(m, expected == actual, size);
}

