#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In nameSpace Hybrid!" << std::endl;
	}
}

int main(void) {
	using Hybrid::HybFunc;		// using �̿�
	HybFunc();					// namespace ���� Ȱ��
	return 0;
}