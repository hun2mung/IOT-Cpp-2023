#include <iostream>
using namespace std;

void divide(int a, int b) {
	try {
		if (b == 0) throw b;	// ���ܰ� �߻��Ǹ�

		int c = a / b;
		cout << "��: " << c << endl;
		int d = a % b;
		cout << "������: " << d << endl;
	}
	catch (int ex) {
		cout << ex << "�� ���� �� �����ϴ�. ���ܹ߻�" << endl;
	}
}


int main() {
	
	divide(10, 3);
	divide(100, 5);
	divide(5, 0);
	
	cout << "���ܹ߻��� �ص� ��������!!!" << endl;

	return 0;
}