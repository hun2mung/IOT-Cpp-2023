#include <iostream>
using namespace std;

class Human {
private:
	char name[20];
	int id;
	int age;
public:

	Human(const char aname[20], int aid, int aage) {	// ������
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	/*
	void setData(const char aname[20], int aid, int aage) {
		//name = "ȫ�浿";  -> �迭�� �̷������� ���ԺҰ�
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	*/
	void getData() {
		cout << "�̸� : " << name << "�ֹ� : " << id << "���� : " << age << endl;
	}
};

int main() {
	/*
	Human h;
	h.setData("ȫ�浿", 12341233, 30);
	h.getData();
	*/

	Human h("ȫ�浿", 12341233, 30);
	h.getData();

	return 0;
}