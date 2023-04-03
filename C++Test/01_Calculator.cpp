// 이동훈

#include "01_Calculator.h"

#include <iostream>
#include <string>

using namespace std;

double Calculator::Calculate(double x, char cper, double y) {		// 생성자 정의

	if (cper == '+') {
		cout << "= " << x + y << endl;
		return x + y;		// 더하기 반환

	}
	else if (cper == '-') {
		cout << "= " << x - y << endl;
		return x - y;		// 뺴기 반환
	}
	else if (cper == '*') {
		cout << "= " << x * y << endl;
		return x * y;		// 곱하기 반환
	}
	else if (cper == '/') {
		try {				
			if(y==0)		// 0 나누기 오류 잡기
				throw y;
			cout << "= " << x / y << endl;
			return x / y;		// 나누기 반환
		}
		catch (double y) {
			cout << "오류" << endl;
		}
	}
	else {			// 잘못된 입력 시 다시 입력.
		cin.clear();
		cin.ignore(100, '\n');
		cout << "다시 입력하시오." << endl;
	}
}