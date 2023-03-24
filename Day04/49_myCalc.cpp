#include <iostream>
using namespace std;

class Mycalu {
private:
	int num1;
	int num2;
public:

	Mycalu(int n1, int n2);

	int add();
	int sub();
	int mul();
	int div();
	void show();
};
Mycalu::Mycalu(int n1, int n2) : num1(n1), num2(n2) {	// �ݷ� �ʱ�ȭ
	//num1 = n1;
	//num2 = n2;
}

int Mycalu::add() {
	return num1 + num2;
}
int Mycalu::sub() {
	return num1 - num2;
}
int Mycalu::mul() {
	return num1 * num2;
}
int Mycalu::div() {
	return num1 / num2;
}
void Mycalu::show() {
	cout << add() << endl;
	cout << sub() << endl;
	cout << mul() << endl;
	cout << div() << endl;
}

int main()
{
	int a, b;
	cout << "�� ���� �Է��Ͻÿ� : " << endl;
	cin >> a;
	cout << "�� ���� �Է��Ͻÿ� : " << endl;
	cin >> b;

	Mycalu mc(a, b);
	mc.show();

	return 0;
}