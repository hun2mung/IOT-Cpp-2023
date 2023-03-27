#include <iostream>
using namespace std;

class SoSimple {
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple(const SoSimple& copy)	 : num(copy.num)			// 복사생성자
	{
		cout << "Called SoSimple(const SoSimple &copy)" << endl;
	}
	SoSimple& AddNum(int n) {
		num += n;
		return *this;
	}

	void showData()
	{
		cout << "num : " << num << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob) {
	cout << "return 이전" << endl;
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj).AddNum(30).showData();
	obj.showData();

	return 0;
}