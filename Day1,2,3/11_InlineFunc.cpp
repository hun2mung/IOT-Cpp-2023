#include <iostream>

inline int SQUARE(int x)		// 인라인 함수 !!!매크로함수와 달리 해당 자료형만 사용 가능
{
	return x * x;
}

int main(void)
{
	std::cout << SQUARE(5) << std::endl;
	std::cout << SQUARE(12) << std::endl;
	return 0;
}