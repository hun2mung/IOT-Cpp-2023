#include <iostream>
using namespace std;

class Person {
private:
	char* name;
	int birthday;
public:
	Person(const char* aname, int abirthday) : birthday(abirthday) {		// 생성자

		int len = strlen(aname) + 1;
		name = new char[len];

		strcpy(name, aname);
	}
	Person(const Person& copy) : birthday(copy.birthday) {		//복사 생성자
		//int len = strlen(copy.name) + 1;
		//name = new char[len];
		name = new char[strlen(copy.name)];
		strcpy(name, copy.name);
	}
	void showPerson() {
		cout << "Name : " << name << endl << "Birthday : " << birthday << endl;
	}
	~Person() {		// 소멸자
		delete[] name;
		cout << "딜리트" << endl;
	}
	Person& operator=(const Person& ref) {		// 연산자 오버로딩
		delete[] name;

		birthday = ref.birthday;

		name = new char[strlen(ref.name) + 1];
		strcpy(name, ref.name);
		return *this;
	}	

};


int main() {
	Person ps1("홍길동", 19990909);
	ps1.showPerson();

	Person ps2(ps1);
	ps2.showPerson();

	Person ps3 = ps2;
	ps3.showPerson();

	Person ps4("강감찬", 20001201);
	ps4.showPerson();

	ps4 = ps1;
	ps4.showPerson();

	return 0;
}