#include <stdio.h>

int main()
{
	/*int num = 10;
	printf("num: %d\n", num);
	
	num = 20;
	printf("num: %d\n", num);*/

	const int num = 10;		// 상수화 -> 값 변경 불가
	printf("num: %d\n", num);
	//num = 20;				// !!!값 변경 불가

	int* p = &num;		// *는 기호(연산자가 아니다) -> 포인터 변수 : 주소 저장 가능(num이라는 변수에 주소 저장) / &(주소연산자)
	printf("p에 저장된 값 : %p\n", p);		//p에 주소값 저장
	printf("p가 참조하는 값 : %d\n", *p);	//p의 주소가 가리키는 값

	*p = 30;			// !!!여기서 *은 간접 참조 연산자 : p라는 변수에 저장되어 있는 주소가 가리키는 값
	printf("p가 가리키는 곳의 데이터 값 : %d\n", *p);	//p의 주소가 가리키는 값
	printf("num: %d\n", num);


	const int num2 = 100;

	printf("num2 : %d\n", num2);

	int* p2 = &num2;
	*p2 = 150;
	printf("변경 후 num2 : %d\n", num2);

	
	int a = 100;
	int b = 200;
	const int* pa = &a;		// 포인터 변수가 가진 데이터 값 상수화
	printf("pa: %p\n", pa);
	pa = &b;
	printf("변경 후 pa: %p\n", pa);

	//*pa = 50;		// 변경 안됨

	int* const pb = &a;		// 포인터 변수를 상수화
	//pb = &b;		// 변경 안됨
	*pb = 70;		// 포인터 변수가 가지는 데이터 값 변경 가능
	printf("*pb : %d\n", *pb);

	return 0;
}