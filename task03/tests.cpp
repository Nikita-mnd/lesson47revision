#include "main.h"
#include "util.h"
#include "logic.h"

void print(int* m, bool result, int size) {

	cout << convert(m, size) << "\n" <<
		(result == true ? "pass." : "fail.") << endl;

}