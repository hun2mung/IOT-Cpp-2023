#include <iostream>

int main()
{	/*
	int num = 10;	// �ʱ�ȭ
	int num1;		// ���� ����
	num1 = 20;		// ����
	
	printf("intũ��: %d\n", sizeof(num1));

	char ch;		// ����Ÿ��
	printf("chũ��: %d\n", sizeof(char));

	double d = 3.14;		// �Ǽ� Ÿ��
	printf("doubleũ��: %d\n", sizeof(double));
	*/

	char ch1 = 0x7f;		// 16����	0~9, A(10), B(11), C(12), D(13), E(14), F(15)
							// 0b 0111 1111 (8bit) // 4bit : �Ϻ�
	unsigned char uch1 = 0x7f;
	printf("ch : %x \t ch: %d\n", ch1, ch1);		// ch : 7f          ch: 127
	printf("ch1 : %x \t ch: %d\n\n", uch1, uch1);	// ch1 : 7f         ch: 127

	char ch2 = 0x9f;
	unsigned char uch2 = 0x9f;
	printf("ch : %x \t ch: %d\n", ch2, ch2);		// ch : ffffff9f    ch: -97
	printf("uch2 : %x \t uch1: %d\n", uch2, uch2);	// uch2 : 9f        uch1: 159
			// 0b 1001 1111 << 1 -> 0b (1) 0011 1110
	uch2 = uch2 << 1;		// ��Ʈ������. uch2�� �������� 1bit��ŭ �̵�.
	ch2 = ch2 << 1;
	printf("uch2 << 1 : %x\t  ch2 << 1 : %x\n", uch2, ch2);

	ch2 = 0x9f;
	uch2 = 0x9f;
	ch2 = ch2 >> 1;
	uch2 = uch2 >> 1;
	printf("uch2 >> 1 : %x\t  ch2 >> 1 : %x\n", uch2, ch2);


	return 0;
}