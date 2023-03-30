#include <iostream>
using namespace std;

int add(int n1, int n2) {
	return n1 + n2;
}

int sub(int n1, int n2) {
	return n1 - n2;
}

int main() {

	int res;

	//출력 함수이름(입력)
	int (*fp)(int, int);		// 함수포인터 선언
	fp = add;
	res = fp(10, 20);
	
	cout << res << endl;
	printf("%d\n", res);

	fp = sub;
	res = fp(10, 10);
	printf("%d\n", res);

	printf("%p\n", add);


	return 0;
}