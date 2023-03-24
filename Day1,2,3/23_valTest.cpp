#include <iostream>

int main()
{	/*
	int num = 10;	// 초기화
	int num1;		// 변수 선언
	num1 = 20;		// 대입
	
	printf("int크기: %d\n", sizeof(num1));

	char ch;		// 문자타입
	printf("ch크기: %d\n", sizeof(char));

	double d = 3.14;		// 실수 타입
	printf("double크기: %d\n", sizeof(double));
	*/

	char ch1 = 0x7f;		// 16진법	0~9, A(10), B(11), C(12), D(13), E(14), F(15)
							// 0b 0111 1111 (8bit) // 4bit : 니블
	unsigned char uch1 = 0x7f;
	printf("ch : %x \t ch: %d\n", ch1, ch1);		// ch : 7f          ch: 127
	printf("ch1 : %x \t ch: %d\n\n", uch1, uch1);	// ch1 : 7f         ch: 127

	char ch2 = 0x9f;
	unsigned char uch2 = 0x9f;
	printf("ch : %x \t ch: %d\n", ch2, ch2);		// ch : ffffff9f    ch: -97
	printf("uch2 : %x \t uch1: %d\n", uch2, uch2);	// uch2 : 9f        uch1: 159
			// 0b 1001 1111 << 1 -> 0b (1) 0011 1110
	uch2 = uch2 << 1;		// 비트연산자. uch2를 왼쪽으로 1bit만큼 이동.
	ch2 = ch2 << 1;
	printf("uch2 << 1 : %x\t  ch2 << 1 : %x\n", uch2, ch2);

	ch2 = 0x9f;
	uch2 = 0x9f;
	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("uch2 >> 1 : %x\t  ch2 >> 1 : %x\n", uch2, ch2);


	return 0;
}