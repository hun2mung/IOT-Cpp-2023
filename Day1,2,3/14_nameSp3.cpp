#include <iostream>

namespace BestComImpl
{
	void SimpleFunc(void);			// �Լ� ����
}

namespace BestComImpl
{
	void PrettyFunc(void);
}

namespace ProgComImpl
{
	void SimpleFunc(void);
}

int main()
{
	BestComImpl::SimpleFunc();

	return 0;
}

void BestComImpl::SimpleFunc(void)
{
	std::cout << "BestCom�� ������ �Լ�" << std::endl;
	PrettyFunc();				// ���� �̸����� -> ����ȣ�� ����
	ProgComImpl::SimpleFunc();		// �ٸ� �̸�����
}

void BestComImpl::PrettyFunc(void)
{
	std::cout << "Pretty!!" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
	std::cout << "ProgCom�� ������ �Լ�" << std::endl;
}