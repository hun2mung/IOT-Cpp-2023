// �̵���

#include "01_Calculator.h"

#include <iostream>
#include <string>

using namespace std;

double Calculator::Calculate(double x, char cper, double y) {		// ������ ����

	if (cper == '+') {
		cout << "= " << x + y << endl;
		return x + y;		// ���ϱ� ��ȯ

	}
	else if (cper == '-') {
		cout << "= " << x - y << endl;
		return x - y;		// ���� ��ȯ
	}
	else if (cper == '*') {
		cout << "= " << x * y << endl;
		return x * y;		// ���ϱ� ��ȯ
	}
	else if (cper == '/') {
		try {				
			if(y==0)		// 0 ������ ���� ���
				throw y;
			cout << "= " << x / y << endl;
			return x / y;		// ������ ��ȯ
		}
		catch (double y) {
			cout << "����" << endl;
		}
	}
	else {			// �߸��� �Է� �� �ٽ� �Է�.
		cin.clear();
		cin.ignore(100, '\n');
		cout << "�ٽ� �Է��Ͻÿ�." << endl;
	}
}