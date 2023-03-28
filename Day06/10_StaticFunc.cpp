#include <iostream>
using namespace std;

class StaticTest {
private:
	static int a;		//멤버변수의 static / 객체 소유가 아닌 클래스 변수, 객체는 static을 가질 수 없다
	int b;
public:
	StaticTest();
	static void setData(int aa);		// 멤버함수의 static
	void print();
};
int StaticTest::a = 10;		// static 멤버변수 초기화
StaticTest::StaticTest() {
	this->b = 20;		// this는 객체를 가르킨다.
}
void StaticTest::setData(int aa) {
	a = aa;
}
void StaticTest::print() {
	cout << "a : " << a << ", " << "b: " << b << endl;
}

int main() {
	StaticTest s1, s2;
	s1.print();
	s2.print();

	s1.setData(30);
	s1.print();
	s2.print();

	StaticTest::setData(100);
	s1.print();
	s2.print();
	return 0;
}
