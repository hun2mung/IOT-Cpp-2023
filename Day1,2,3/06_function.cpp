#include <iostream>
/*
int main() {

	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res: " << res << std::endl;

	return 0;
}
*/

/*
// �Է°� ����� ���� �Լ�
void add(void) {
	int a = 10;
	int b = 20;
	int res;
	res = a + b;
	std::cout << "res: " << res << std::endl;
}

int main() {

	add();		//�Լ�ȣ��

	return 0;
}
*/

/*
void add(int a, int b) {	// �Է¸� �ִ� �Լ� -> �Է��� ����� ��� : (�Ű�)������ ����

	int res;		// ���� ����
	res = a + b;
	std::cout << "res: " << res << std::endl;

}

int main() {

	int num1 = 10;
	int num2 = 20;

	add(num1, num2);		// �Է����� �������ִ� ���� ���μ�(num1, num2)

	return 0;
}
*/

int add(int a, int b);		// �Լ� ����

int add(int a, int b) {		// �Է°� ����� �ִ� �Լ�

	int res;				// ���� ����
	res = a + b;
	//std::cout << "res: " << res << std::endl;

	return res;
}

int main() {

	int num1 = 10;
	int num2 = 20;

	int res = add(num1, num2);		// ���ϰ��� �����ؼ� ���
	std::cout << "res: " << res << std::endl;
	std::cout << "res: " << add(num1, num2) << std::endl;

	return 0;
}