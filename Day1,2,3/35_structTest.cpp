/*
사용자 정의 자료형인 구조체 : c
*/
#include <iostream>

struct human {
	char name[20];
	int age;
};

int main()
{
	//char h;
	struct human h = { "홍길동", 23 };		// 구조체 변수 h 선언
	
	return 0;
}