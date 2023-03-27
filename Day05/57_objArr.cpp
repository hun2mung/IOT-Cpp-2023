// 포인터 배열은 배열의 각각 요소가 포인터
// 배열 포인터는 배열을 가리키는 포인터

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
	Person() {
		name = NULL;
		age = 0;
		cout << "called Person()" << endl;
	}
	void SetPersonInfo(char* myname, int myage) {
		name = myname;
		age = myage;
	}
	void ShowPersonInfo() const {
		cout << "이름: " << name << ", ";
		cout << "나이: " << age << endl;
	}
	~Person() {		// 소멸자
		delete[]name;
		cout << "called destructor!" << endl;
	}
};


int main() {
	Person parr[3];
	char namestr[100];
	char* strptr;
	int age;
	int len;

	for (int i = 0;i < 3;i++) {
		cout << "이름 : ";
		cin >> namestr;
		cout << "나이 : ";
		cin >> age;
		len = strlen(namestr) + 1;
		strptr = new char[len];
		strcpy(strptr, namestr);
		parr[i].SetPersonInfo(strptr, age);
	}
	parr[0].ShowPersonInfo();
	parr[1].ShowPersonInfo();
	parr[2].ShowPersonInfo();
	return 0;
}