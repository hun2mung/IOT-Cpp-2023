#include <iostream>
using namespace std;

class Person {
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;		// +1은 null문자
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}

	void ShowPersonInfo() const {
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;
	}
	~Person() {		// 소멸자
		delete[] name;
		cout << "called destructor!" << endl;
	}
};

int main(void) {

	Person man1("LEE DONG HUN", 26);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man1.ShowPersonInfo();

	return 0;
}