#include <iostream>
using namespace std;

class Human {
private:
	char name[20];
	int id;
	int age;
public:

	Human(const char aname[20], int aid, int aage) {	// 생성자
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	/*
	void setData(const char aname[20], int aid, int aage) {
		//name = "홍길동";  -> 배열에 이런식으로 대입불가
		strcpy(name, aname);
		id = aid;
		age = aage;
	}
	*/
	void getData() {
		cout << "이름 : " << name << "주번 : " << id << "나이 : " << age << endl;
	}
};

int main() {
	/*
	Human h;
	h.setData("홍길동", 12341233, 30);
	h.getData();
	*/

	Human h("홍길동", 12341233, 30);
	h.getData();

	return 0;
}