#include <iostream>
using namespace std;

int RefReFuncOne(int& ref) {	// ��ȯ���� �⺻ �ڷ��� int
	// ����� �������� ��쿡�� �����ڷ� ��ȯ����

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