#include <iostream>
using namespace std;

// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ�. (����)
class Myclass {
private:
	const char* id;
	int age;
	char* name;
	// ����Լ�(=�޼ҵ�):���

public:
	Myclass(const char* myId, int myAge, const char* myName);

	//void set(const char* myId, int myAge, const char* myName) {		// ����Լ�(�޼ҵ�)
	//	id = myId;
	//	age = myAge;
	//	name = myName;
	//}

	void getData() {
		cout << "id : " << id << endl;
		cout << "age : " << age << endl;
		cout << "name : " << name << endl;
	}
};

Myclass::Myclass(const char* myId, int myAge, const char* myName) : id(myId), age(myAge), name("����") {
	getData();
	cout << "������ ȣ��" << endl;
	int len = strlen(myName) + 1;
	name = new char[len];

	id = myId;
	age = myAge;
	strcpy(name, myName);
};


int main()
{
	//Myclass o;	// ��ü ����
	//o.set("201712646", 26, "�̵���");
	//o.get();

	Myclass mc("201712646", 26, "�̵���");		// �����ڿ� ����
	mc.getData();

	return 0;
}