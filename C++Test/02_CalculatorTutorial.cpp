// �̵���

#include <iostream>
#include <string>
#include "01_Calculator.h"
using namespace std;

int main(void) {
	string str;

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	cout << "Press \"ctrl + c\" to exit the program" << endl << endl;

	Calculator cal;		// ��ü ����

	while (true) {		// �ݺ� ����
		cout << "input >> ";
		cin >> str;		// �Է¹ޱ�
		cal.Calculate(str);

	}

	return 0;
}
