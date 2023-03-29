#include <iostream>
using namespace std;

class Person {
private:
	char name[30];
	int age;
public:
	Person(const char* aname, int aage);
	void getData() {
		cout << "name : " << name << endl;
		cout << "age : " << age << endl;
	}
};
Person::Person(const char* aname, int aage) : age(aage) {
	strcpy(name, aname);
}


class Student : Person {
private:
	int studentId;
public:
	Student(const char* aname, int aage, int astudentId);
	void showData() {
		getData();
		cout << "studentId : " << studentId << endl;
	}
};
Student::Student(const char* aname, int aage, int astudentId) : Person(aname, aage) {
	studentId = astudentId;
}

int main(void) {
	Student st("ÀÌµ¿ÈÆ", 20, 1);
	st.showData();

	return 0;
}

  