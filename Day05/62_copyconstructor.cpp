#include <iostream>
using namespace std;

class Myclass {
	int num;
	char* name;
public:
	Myclass(int n, const char* name) : num(n) {
		cout << "������ ȣ��" << endl;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	explicit Myclass(const Myclass& other) : num(other.num){		// ���� ����
		cout << "��������� ȣ��" << endl;
		//this->name = other.name;
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
		this->num = other.num;
	}
	void getData() {
		cout << num << "," << name << endl;
	}
	~Myclass() {
		cout << "�޸�����" << endl;
		delete[] this->name;
	}
};

int main() {
	Myclass m1(1,"ȫ�浿");
	m1.getData();
	//Myclass m2 = m1;		// m1 ��ü�� �����ؼ� m2 ��ü ����.(��������� ȣ��) -> �̷��� ���´� ������ ��ȯ
	//m2.getData();
	Myclass m3(m1);			//���� ������ ȣ�� / ����������� �Ű������� ������
	m3.getData();
	

	return 0;
}

// new ������ -> heap�� �Ҵ� -> �Ҹ��� �ʿ�
// ���� ���� -> heap �������� ���� -> ȣ�� �� heap ������ �Ҹ��ڿ� ���� ������� ��� ���� �߻�.
// 