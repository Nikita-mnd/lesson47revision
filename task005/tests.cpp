#include "util.h"
#include "logic.h"

void print(int* m, bool result, int size) {

	cout << convert(m, size) << "\n" <<
		(result == true ? "pass." : "fail.") << endl;

}

void test01(){
	int expected[]{ 12, 4, 5, 7, 15, 4, 10, 17, 23, 7 };
	int size = 10;
	int a = 2,b = 9;
	string direction = "a";
	sort(a,  b,  direction, expected,  size) ;
	int actual[]{ 12, 4, 4,5,7,10,15,17,23,7 };
	print(expected, expected == actual, size);
}