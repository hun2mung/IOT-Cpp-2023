#include <iostream>
using namespace std;

class SoSimple {
private:
	static int simObjCnt;	// static 변수는 메모리 공간에 하나만 할당 되어 공유되는 변수.
public:
	SoSimple() {
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};
int SoSimple::simObjCnt = 0;		// static 멤버변수 초기화

class SoComplex {
private:
	static int cmxObjCnt;
public:
	SoComplex() {
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex& copy) {
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
};
int SoComplex::cmxObjCnt = 0;

int main(void) {
	SoSimple sim1;
	SoSimple sim2;

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();

	return 0;
}