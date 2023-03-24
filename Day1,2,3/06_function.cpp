#include <iostream>
/*
int main() {

	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res: " << res << std::endl;

	return 0;
}
*/

/*
// 입력과 출력이 없는 함수
void add(void) {
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res: " << res << std::endl;
}

int main() {

	add();		//함수호출

	return 0;
}
*/

/*
void add(int a, int b) {	// 입력만 있는 함수 -> 입력을 만드는 방법 : (매개)변수를 선언

	int res;		// 변수 선언
	res = a + b;
	std::cout << "res: " << res << std::endl;

}

int main() {

	int num1 = 10;
	int num2 = 20;

	add(num1, num2);		// 입력으로 전달해주는 놈을 실인수(num1, num2)

	return 0;
}
*/

int add(int a, int b);		// 함수 선언

int add(int a, int b) {		// 입력과 출력이 있는 함수

	int res;				// 변수 선언
	res = a + b;
	//std::cout << "res: " << res << std::endl;

	return res;
}

int main() {

	int num1 = 10;
	int num2 = 20;

	int res = add(num1, num2);		// 리턴값을 저장해서 사용
	std::cout << "res: " << res << std::endl;
	std::cout << "res: " << add(num1, num2) << std::endl;

	return 0;
}