#include <iostream>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;		// +1�� null����
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	void ShowPersonInfo() const {
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person() {		// �Ҹ���
		delete[]name;
		cout << "called destructor!" << endl;
	}
};


int main() {
	Person man1("Dong Hun", 26);
	Person man2("Jang", 41);
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;
}