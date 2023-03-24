#include <iostream>

using namespace std;	// namespace std에 선언된 모든 것에 생략 가능

int main(void)
{
	int num = 20;
	cout << "Hello World!" << endl;		//std 생략
	cout << "Hello"<< "World!" << endl;
	cout << num << ' ' << 'A';
	cout << ' ' << 3.14 << endl;
	return 0;
}