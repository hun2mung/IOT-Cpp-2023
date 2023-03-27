#include<iostream>
using namespace std;

class Human {
private:
	char* name;
	int id;
	int age;

public:
	Human(const char aname[20], int aid, int aage) {
		name = new char[strlen(aname) + 1];		// µ¿Àû ÇÒ´ç
		strcpy(name, aname);
		id = aid;
		age = aage;
	}

	~Human() {
		delete[] name;
		cout << "name ÇØÁ¦" << endl;
	}

	void getData() {
		cout << "ÀÌ¸§ : " << name << "ÁÖ¹ø : " << id << "³ªÀÌ : " << age << endl;
	}

};


int main() {

	Human h("È«±æµ¿", 12341233, 30);
	h.getData();

	Human hary[3] = {Human("±è¿µÈñ", 2, 23), Human("±èÃ¶¼ö", 3, 35), Human("¾Æ¹«°³", 4, 35)};
	hary[0].getData();
	hary[1].getData();
	hary[2].getData();

	return 0;
}