#include <iostream>

int Adder(int num1=10, int num2=20);

int main(void) {
	
	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;			// ���ڰ� ù ��° �Ű������� ����
	std::cout << Adder(3, 5) << std::endl;

	return 0;
}

int Adder(int num1, int num2) {
	return num1 + num2;
}