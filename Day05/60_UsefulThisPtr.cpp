#include <iostream>
using namespace std;

class TwoNumber {
private:
	int num1;
	int num2;
public:
	TwoNumber(int num1, int num2) {
		this->num1 = num1;		// this �����ͷ� �Ű������� ���� ���� ��������� ����. 
		this->num2 = num2;		// this->num1 : private�� �������, num1 : �Ű�����(��������)
	}
	/*
	TowNumber(int num1, int num2)
		: num1(num1), num2(num2)	// �ݷ� �ʱ�ȭ������ this ��� �Ұ�.
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