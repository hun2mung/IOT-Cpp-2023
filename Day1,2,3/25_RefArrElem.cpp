#include <iostream>
using namespace std;

int main()
{
	int arr[3] = { 1, 3, 5 };
	int& ref1 = arr[0];
	int& ref2 = arr[1];
	int& ref3 = arr[2];

	cout << ref1 << endl;
	cout << ref2 << endl;
	cout << ref3 << endl;


	int ary[5] = { 1, 2, 3, 4, 5 };
	printf("ary ��üũ��: %d\n", sizeof(ary));
	int* pary = ary;

	printf("ary �ּ�: %p\n", ary);
	printf("ary[0] �ּ�: %p\n", &ary[0]);
	printf("ary + 1 �ּ�: %p\n", ary + 1);
	printf("ary[1] �ּ�: %p\n", &ary[1]);

	printf("pary �ּ�: %p\n", &pary);
	printf("pary ��: %p\n", pary);
	printf("pary[0] �ּ�: %p\n", &pary[0]);
	printf("pary[0] ��: %d\n", pary[0]);
	printf("pary[0] ��: %d\n", *pary);
	printf("pary[1] ��: %d\n", *(pary+1));

	return 0;
}