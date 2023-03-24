/*
콜론초기화가 필요한 경우
1. 상수멤버변수, 2. 객체멤버변수, 3. 참조멤버변수 (4.멤버변수)
*/
#include <iostream>
using namespace std;

class ConstSome {
public:
	const int val;		// 상수 멤버 변수
	ConstSome(int n) : val(n) {

	}

	void printval() {
		cout << val << endl;
	}
};

class RefSome {
public:
	int& ref;		// 참조 멤버 변수
	RefSome(int n) : ref(n) {

	}
	void printval() {
		cout << ref << endl;
	}
};
class Position {
public:
	int x, y;
	Position(int ax, int ay) {
		x = ax;
		y = ay;
	}
};

class objSome {
public:
	Position pos;		// 객체 멤버 변수
	objSome(int ax, int ay) :pos(ax, ay) {}
	void printVal() {
		cout << pos.x << " " << pos.y << endl;
	}

};

int main() {

	ConstSome cs(100);
	cs.printval();

	int n = 20;
	RefSome rs(n);
	rs.printval();

	objSome os(10, 20);
	os.printVal();
	return 0;
}
