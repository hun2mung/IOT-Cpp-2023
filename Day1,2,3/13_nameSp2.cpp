#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);			// 함수 선언
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main()
{
	BestComImpl::SimpleFunc();
	ProgComImpl::SimpleFunc();
	return 0;
}

void BestComImpl::SimpleFunc(void)		// 함수 정의
{
	std::cout << "BestCom이 정의한 함수" << std::endl;		
}

void ProgComImpl :: SimpleFunc(void)
{
	std::cout << "ProgCom이 정의한 함수" << std::endl;
}
