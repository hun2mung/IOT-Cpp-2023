#include <iostream>

#define SUM(x, y)	x + y	// 매크로 함수 -> 실행속도에 이점
#define SQUARE1(x)	x * x
#define SQUARE2(x)	(x) * (x)

void func()
{

}

int main()
{
	std::cout << SUM(10, 20) << std::endl;	//30
	//func();
	
	std::cout << SQUARE1(10) << std::endl;	//100
	
	std::cout << SQUARE1(10 + 1) << std::endl;	// 10 + 1 * 10 + 1 => 21

	std::cout << SQUARE2(10 + 1) << std::endl;	//121

	return 0;
}