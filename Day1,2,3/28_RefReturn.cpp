#include <iostream>
using namespace std;

int& RefReFuncOne(int& ref) {

	ref++;			// 1����	
	return ref;
}

int main(void) {

	int num1 = 1;
	int& num2 = RefReFuncOne(num1);
	
	num1++;		// 1����
	num2++;		// 1����
	cout << "num1: " << num1 << endl;		//4
	cout << "num1: " << num2 << endl;		//4

	return 0;
}