#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);			// �Լ� ����
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

void BestComImpl::SimpleFunc(void)		// �Լ� ����
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;		
}

void ProgComImpl :: SimpleFunc(void)
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}