#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple(const SoSimple& copy) : num(copy.num)			// 복사생성자
	{
		cout << "Called SoSimple(const SoSimple &copy)" << endl;
	}
	void showData()
	{
		cout << "num : " << num << endl;
	}
};

void SimpleFuncObj(SoSimple ob) {
	ob.showData();
}

int main(void)
{
	SoSimple obj(7);
	cout << "함수 호출 전" << endl;
	SimpleFuncObj(obj);
	cout << "함수 호출 후" << endl;
	
	return 0;
}