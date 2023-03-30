#include <iostream>
using namespace std;

class CTest {
private:
	int num;
public:
	CTest(int n) : num(n) {
		cout << num << "CTest Constructor" << endl;
	}
	virtual ~CTest() {
		cout << num << "CTest Destructor" << endl;
	}
	void func() {
		cout << "CTest func()" << endl;
	}
	virtual void vfunc() {		// 가상함수
		cout << "CTest vfunc()" << endl;
	}
};

class CTestSub : public CTest {
private:
	int snum;
public:
	CTestSub(int n1, int n2) :CTest(n1), snum(n2) {
		cout << snum << "CTestSub Constructor" << endl;
	}
	~CTestSub() {
		cout << snum << "CTestSub Destructor" << endl;
	}
	void vfunc() {		// 오버라이딩
		cout << "CTestSub vfunc()" << endl;
	}
};


int main() {

	//CTest ct(1);
	cout << "===================" << endl;
	//CTestSub ts(2, 3);
	cout << "===================" << endl;
	CTest* ps = new CTestSub(4, 44);

	delete ps;

	return 0;
}