/*
�ݷ��ʱ�ȭ�� �ʿ��� ���
1. ����������, 2. ��ü�������, 3. ����������� (4.�������)
*/
#include <iostream>
using namespace std;

class ConstSome {
public:
	const int val;		// ��� ��� ����
	ConstSome(int n) : val(n) {

	}

	void printval() {
		cout << val << endl;
	}
};

class RefSome {
public:
	int& ref;		// ���� ��� ����
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
	Position pos;		// ��ü ��� ����
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
