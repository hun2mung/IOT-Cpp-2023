#include <iostream>
using namespace std;

// Ŭ���� ��������� ������ �� �ִ� ����� 3������ ǥ���ȴ�. (����)
class Myclass {
private:
	const char* id;
	int age;
	const char* name;
	// ����Լ�(=�޼ҵ�):���

public:
	void set(const char* myId, int myAge, const char* myName) {
		id = myId;
		age = myAge;
		name = myName;
	}
	void get() {
		cout << "id : " << id << endl;
		cout << "age : " << age << endl;
		cout << "name : " << name << endl;
	}
};

int main()
{
	Myclass o;
	o.set("201712646", 26, "�̵���");
	o.get();

	return 0;
}