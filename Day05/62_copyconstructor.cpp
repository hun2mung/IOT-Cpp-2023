#include <iostream>
using namespace std;

class Myclass {
	int num;
public:
	Myclass(int n) : num(n) {};
	void getData() {
		cout << num << endl;
	}
};

int main() {
	Myclass m1(10);			
	Myclass m2 = m1;		// m1 객체를 복사해서 m2 객체 생성.(복사생성자 호출)
	Myclass m3(m2);			//복사 생성자 호출 / 복사생성자의 매개변수는 참조형
	
	m1.getData();
	m2.getData();
	m3.getData();

	return 0;
}

// new 연산자 -> heap에 할당 -> 소멸자 필요
// 얕은 복사 -> heap 영역에서 복사