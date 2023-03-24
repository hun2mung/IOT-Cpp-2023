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
	void set(const char* myId, int myAge, const char* myName) {
		id = myId;
		age = myAge;
		name = myName;
	}
	void get() {
		cout << "id : " << id << endl;
		cout << "age : " << age << endl;
		cout << "name : " << name << endl;
	}
};

int main()
{
	Myclass o;
	o.set("201712646", 26, "이동훈");
	o.get();

	return 0;
}