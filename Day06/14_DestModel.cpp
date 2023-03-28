#include <iostream>
using namespace std;

class Person {
private:
	char* name;
public:
	Person(const char* myname) {
		name = new char[strlen(myname) + 1];
		strcpy(name, myname);
	}
	~Person() {
		cout << "~Person() " << name << endl;
		delete[]name;
	}
	void WhatYourName() const {
		cout << "My name is " << name << endl;
	}
};

class UnivStudent : public Person {
private:
	char* major;		//전공과목
public:
	UnivStudent(const char* myname, const char* mymajor)
		: Person(myname) {	// 슈퍼클래스 생성자 호출
		major = new char[strlen(mymajor) + 1];
		strcpy(major, mymajor);
	}
	~UnivStudent() {
		cout << "~UnivStudent() " << major << endl;
		delete[] major;
	}
	void WhoAreYou() const {
		WhatYourName();
		cout << "My Major is " << major << endl << endl;
	}
};

int main(void) {
	UnivStudent std1("Kim", "Mathmatics");
	std1.WhoAreYou();
	UnivStudent std2("Hong", "Physics");
	std2.WhoAreYou();

	return 0;
}