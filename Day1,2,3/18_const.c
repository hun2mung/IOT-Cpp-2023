#include <stdio.h>

int main()
{
	/*int num = 10;
	printf("num: %d\n", num);
	
	num = 20;
	printf("num: %d\n", num);*/

	const int num = 10;		// ���ȭ -> �� ���� �Ұ�
	printf("num: %d\n", num);
	//num = 20;				// !!!�� ���� �Ұ�

	int* p = &num;		// *�� ��ȣ(�����ڰ� �ƴϴ�) -> ������ ���� : �ּ� ���� ����(num�̶�� ������ �ּ� ����) / &(�ּҿ�����)
	printf("p�� ����� �� : %p\n", p);		//p�� �ּҰ� ����
	printf("p�� �����ϴ� �� : %d\n", *p);	//p�� �ּҰ� ����Ű�� ��

	*p = 30;			// !!!���⼭ *�� ���� ���� ������ : p��� ������ ����Ǿ� �ִ� �ּҰ� ����Ű�� ��
	printf("p�� ����Ű�� ���� ������ �� : %d\n", *p);	//p�� �ּҰ� ����Ű�� ��
	printf("num: %d\n", num);


	const int num2 = 100;

	printf("num2 : %d\n", num2);

	int* p2 = &num2;
	*p2 = 150;
	printf("���� �� num2 : %d\n", num2);

	
	int a = 100;
	int b = 200;
	const int* pa = &a;		// ������ ������ ���� ������ �� ���ȭ
	printf("pa: %p\n", pa);
	pa = &b;
	printf("���� �� pa: %p\n", pa);

	//*pa = 50;		// ���� �ȵ�

	int* const pb = &a;		// ������ ������ ���ȭ
	//pb = &b;		// ���� �ȵ�
	*pb = 70;		// ������ ������ ������ ������ �� ���� ����
	printf("*pb : %d\n", *pb);

	return 0;
}