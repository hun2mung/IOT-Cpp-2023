// �̵���

#include "01_Calculator.h"

#include <iostream>

using namespace std;

double Calculator::Calculate(double x, char cper, double y) {		// ������ ����

	if (cper == '+') {
		cout << "= " << x + y << endl;
		return x + y;

	}
	else if (cper == '-') {
		cout << "= " << x - y << endl;
		return x - y;
	}
	else if (cper == '*') {
		cout << "= " << x * y << endl;
		return x * y;
	}
	else if (cper == '/') {
		try {
			throw y;
			cout << "= " << x / y << endl;
			return x / y;
		}
		catch (double y) {
			cout << "����" << endl;
		}
	}
}