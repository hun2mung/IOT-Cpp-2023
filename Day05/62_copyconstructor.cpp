#include <iostream>
using namespace std;

class Myclass {
	int num;
public:
	Myclass(int n) : num(n) {};
	void getData() {
		cout << num << endl;
	}
};

int main() {
	Myclass m1(10);			
	Myclass m2 = m1;		// m1 ��ü�� �����ؼ� m2 ��ü ����.(��������� ȣ��)
	Myclass m3(m2);			//���� ������ ȣ�� / ����������� �Ű������� ������
	
	m1.getData();
	m2.getData();
	m3.getData();

	return 0;
}

// new ������ -> heap�� �Ҵ� -> �Ҹ��� �ʿ�
// ���� ���� -> heap �������� ����