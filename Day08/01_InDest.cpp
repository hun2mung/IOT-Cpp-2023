#include <iostream>

class CTest {
private:
	int num;
public:
	CTest(int n) {
		num = n;
		std::cout << num << "CTest Constructor" << std::endl;

	}
	~CTest() {		// ����Ŭ���� �Ҹ���
		std::cout << num << "CTest Constructor" << std::endl;
	}
};
class CTestSub :public CTest {
private:
	int subn;
public:
	CTestSub(int sn, int n) : CTest(sn) {
		subn = n;
		std::cout << subn << "CTestSub Constructor" << std::endl;
	}
	~CTestSub() {      // ����Ŭ���� �Ҹ���
		std::cout << subn << "CTestSub Dstructor" << std::endl;
	}
};
int main()
{
	CTest ct(1);
	std::cout << "=======================" << std::endl;
	CTestSub ts(2, 3);

	return 0;
}