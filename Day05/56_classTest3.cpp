#include<iostream>
using namespace std;

class Human {
private:
	char* name;
	int id;
	int age;

public:
	Human(const char aname[20], int aid, int aage) {
		name = new char[strlen(aname) + 1];		// ���� �Ҵ�
		strcpy(name, aname);
		id = aid;
		age = aage;
	}

	~Human() {
		delete[] name;
		cout << "name ����" << endl;
	}

	void getData() {
		cout << "�̸� : " << name << "�ֹ� : " << id << "���� : " << age << endl;
	}

};


int main() {

	Human h("ȫ�浿", 12341233, 30);
	h.getData();

	Human hary[3] = {Human("�迵��", 2, 23), Human("��ö��", 3, 35), Human("�ƹ���", 4, 35)};
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}