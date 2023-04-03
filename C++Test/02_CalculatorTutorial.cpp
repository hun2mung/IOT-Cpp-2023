// 이동훈

#include <iostream>
#include <string>
#include "01_Calculator.h"
using namespace std;

int main(void) {
	string str;

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	cout << "Press \"ctrl + c\" to exit the program" << endl << endl;

	Calculator cal;		// 객체 생성

	while (true) {		// 반복 실행
		cout << "input >> ";
		cin >> str;		// 입력받기
		cal.Calculate(str);

	}

	return 0;
}
