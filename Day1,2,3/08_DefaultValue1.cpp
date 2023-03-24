# include <iostream>

int Adder(int num1 =10, int num2 = 20)		// 함수 선언
{
	return num1 + num2;
}

int main() {

	std::cout << Adder() << std::endl;
	std::cout << Adder(5) << std::endl;
	std::cout << Adder(3,5) << std::endl;
	return 0;
}