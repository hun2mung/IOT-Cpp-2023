#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "create obj : " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj : " << num << endl;
	}
	void showTempInfo() {
		cout << "My num is " << num << endl;
	}
};
// 임시객체는 다음 행으로 넘어가면 바로 소멸!!!
int main(void) {
	Temporary(100);			// 임시 객체 직접 생성 방법 -> 생성자 호출 후 바로 소멸.
	cout << "**************** after make!" << endl << endl;

	Temporary(200).showTempInfo();		// 생성자 호출->함수 호출->소멸자 호출
	cout << "**************** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);			// 참조자로 임시객체 참조. -> 다음줄에서 소멸되지 않고 유지됨!!!
	cout << "**************** end of main!" << endl << endl;

	return 0;
}