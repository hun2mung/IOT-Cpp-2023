// �̵���

#include <iostream>
#include <string>
#include "01_Calculator.h"		// �������
using namespace std;

int main(void) {
	int x, y;
	char cper;

	Calculator cal;		// ��ü ����

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	cout << "Press \"ctrl + c\" to exit the program" << endl << endl;


	while (true) {		// �ݺ� ����
		cout << "input >> ";
		cin >> x >> cper >> y;		// �Է¹ޱ�
		if (cin.eof()) {		// ctrl + c �Է� ���
			exit(0);
		}
		cal.Calculate(x, cper, y);
	}
	return 0;
}
