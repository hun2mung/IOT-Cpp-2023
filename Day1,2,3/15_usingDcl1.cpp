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
	using Hybrid::HybFunc;		// using 이용
	HybFunc();					// namespace 없이 활용
	return 0;
}