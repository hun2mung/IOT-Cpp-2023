#include <iostream>
using namespace std;

int main()
{
	int num = 12;
	int* ptr = &num;
	int** dptr = &ptr;

	int& ref = num;
	int* (&pref) = ptr;			// 포인터 참조자
	int** (&dpref) = dptr;		// 이중 포인터 참조자

	cout << ref << endl;
	cout << *pref << endl;
	cout << **dpref << endl;

	return 0;
}