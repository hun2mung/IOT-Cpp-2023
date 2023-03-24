#include <iostream>
using namespace std;

// 클래스 멤버변수에 접근할 수 있는 방법은 3가지로 표현된다. (은닉)
class Myclass {
private:
	const char* id;
	int age;
	const char* name;
	// 멤버함수(=메소드):기능

public:
	Myclass(const char* myId, int myAge, const char* myName);

	//void set(const char* myId, int myAge, const char* myName) {		// 멤버함수(메소드)
	//	id = myId;
	//	age = myAge;
	//	name = myName;
	//}

	void getData() {
		cout << "id : " << id << endl;
		cout << "age : " << age << endl;
		cout << "name : " << name << endl;
	}
};

Myclass::Myclass(const char* myId, int myAge, const char* myName) : id(myId), age(myAge), name("가위") {
	getData();
	cout << "생성자 호출" << endl;
	id = myId;
	age = myAge;
	name = myName;
};


int main()
{
	//Myclass o;	// 객체 생성
	//o.set("201712646", 26, "이동훈");
	//o.get();

	Myclass mc("201712646", 26, "이동훈");		// 생성자에 전달
	mc.getData();

	return 0;
}