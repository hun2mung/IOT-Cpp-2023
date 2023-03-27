#include <iostream>
using namespace std;

class TwoNumber {
private:
	int num1;
	int num2;
public:
	TwoNumber(int num1, int num2) {
		this->num1 = num1;		// this 포인터로 매개변수로 들어온 값이 멤버변수에 저장. 
		this->num2 = num2;		// this->num1 : private의 멤버변수, num1 : 매개변수(지역변수)
	}
	/*
	TowNumber(int num1, int num2)
		: num1(num1), num2(num2)	// 콜론 초기화에서는 this 사용 불가.
	{
		//empty
	}
	*/

	void ShowTowNumber() {
		cout << this->num1 << endl;
		cout << this->num2 << endl;
	}
};

int main(void) {
	TwoNumber two(2, 4);
	two.ShowTowNumber();
	return 0;
}