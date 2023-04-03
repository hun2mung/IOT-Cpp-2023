// 이동훈

#include <iostream>
#include <string>
#include "01_Calculator.h"		// 헤더파일
using namespace std;

int main(void) {
	int x, y;
	char cper;

	Calculator cal;		// 객체 생성

	cout << "Calculator Console Application" << endl << endl;
	cout << "Please enter the operation to perform. Format: a+b | a-b | a*b | a/b" << endl;
	cout << "Press \"ctrl + c\" to exit the program" << endl << endl;


	while (true) {		// 반복 실행
		cout << "input >> ";
		cin >> x >> cper >> y;		// 입력받기
		if (cin.eof()) {		// ctrl + c 입력 잡기
			exit(0);
		}
		cal.Calculate(x, cper, y);
	}
	return 0;
}
