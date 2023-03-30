#include <iostream>
using namespace std;

class Person {
private:
	char *name;
	int birthday;
public:
	Person(const char* aname, int abirthday) : birthday(abirthday) {
		
		int len = strlen(aname) + 1;
		name = new char[len];
		
		strcpy(name, aname);

	}
	void showPerson() {
		cout << "Name: " << name << endl << "Birthday" << birthday << endl;
	}
	~Person() {
		delete[] name;
		cout << "µô¸®Æ®" << endl;
	}

};


int main() {
	Person ps1("È«±æµ¿", 19990909);
	ps1.showPerson();

	Person ps2(ps1);
	ps2.showPerson();

	Person ps3 = ps2;
	ps3.showPerson();

	return 0;
}