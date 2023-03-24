
// c는 함수 이름으로 호출되어 오버로딩 안됨
// c++은 매개변수까지 확인하여 오버로딩 됨

#include <iostream>
/*
void func() {

	//std::cout << "func()" << std::endl;
	printf("func()\n");
}

void func(int a) {

	//std::cout << "func(a)" << std::endl;
	printf("func(a)\n");
}

void func(int a, int b) {

	//std::cout << "func(a)" << std::endl;
	printf("func(a)\n");
}

void func(char a) {

	//std::cout << "func(a)" << std::endl;
	printf("func(a)\n");
}

int main() {

	int n = 10, n1 = 20;
	char ch = 'a';
	func();
	func(n);
	func(n, n1);
	func(ch);

	return 0;
}
*/

void MyFunc(void)
{
	std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
	std::cout << "MyFunc(char c) called" << std::endl;
}

void MyFunc(int a, int b)
{
	std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void)
{
	MyFunc();
	MyFunc('A');
	MyFunc(12, 13);
	return 0;
}