#include <iostream>
using namespace std;

class Person {
private:
	char name[30];
	int birthday;
public:
	Person(const char* aname, int abirthday) : birthday(abirthday) {
		strcpy(name, aname);

	}
	void showPerson() {
		cout << "Name: " << name << endl << "Birthday" << birthday << endl;
	}

};


int main() {

	Person ps1("ȫ�浿", 19990909);
	ps1.showPerson();

	Person ps2(ps1);
	ps2.showPerson();

	Person ps3 = ps2;
	ps3.showPerson();

	return 0;
}