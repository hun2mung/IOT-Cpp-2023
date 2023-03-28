#include <iostream>
using namespace std;

class SoSimple
{
public:
	static int simObjCnt;
public:			// 변수와 함수 구분 목적으로 가끔 구분할 때 있음.
	SoSimple()	// 생성자
	{
		simObjCnt++;
	}
};
int SoSimple::simObjCnt = 0;		// static 변수 초기화

int main(void) {
	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	SoSimple sim1;
	SoSimple sim2;

	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;
}
