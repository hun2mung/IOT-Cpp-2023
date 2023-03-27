#include <iostream>
using namespace std;

class Myclass {
	int num;
	char* name;
public:
	Myclass(int n, const char* name) : num(n) {
		cout << "생성자 호출" << endl;
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
	}
	explicit Myclass(const Myclass& other) : num(other.num){		// 깊은 복수
		cout << "복사생성자 호출" << endl;
		//this->name = other.name;
		this->name = new char[strlen(other.name) + 1];
		strcpy(this->name, other.name);
		this->num = other.num;
	}
	void getData() {
		cout << num << "," << name << endl;
	}
	~Myclass() {
		cout << "메모리해제" << endl;
		delete[] this->name;
	}
};

int main() {
	Myclass m1(1,"홍길동");
	m1.getData();
	//Myclass m2 = m1;		// m1 객체를 복사해서 m2 객체 생성.(복사생성자 호출) -> 이러한 형태는 묵시적 변환
	//m2.getData();
	Myclass m3(m1);			//복사 생성자 호출 / 복사생성자의 매개변수는 참조형
	m3.getData();
	

	return 0;
}

// new 연산자 -> heap에 할당 -> 소멸자 필요
// 얕은 복사 -> heap 영역에서 복사 -> 호출 전 heap 영역이 소멸자에 의해 사라졌을 경우 문제 발생.
// 