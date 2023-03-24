#include <iostream>
using namespace std;

int RefReFuncOne(int& ref) {	// 반환형이 기본 자료형 int
	// 출력이 참조자인 경우에만 참조자로 반환가능

	ref++;			
	return ref;
}

int main(void) {

	int num1 = 1;
	int num2 = RefReFuncOne(num1);

	num1++;
	num2 += 100;
	cout << "num1: " << num1 << endl;		//3
	cout << "num1: " << num2 << endl;		//102

	return 0;
}