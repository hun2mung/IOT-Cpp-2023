/*
�޸� �����Ҵ�(C type)
*/
#include <iostream>

int main()
{
	int* arr;
	int size;

	printf("�迭���� ����: ");
	scanf_s("%d", &size);		//scanf�� �Է��� ������ �ּҿ����� �ʿ�

	arr = (int*)malloc(sizeof(int));	// heap������ �Ҵ�
	
	//arr = malloc(sizeof(int));
	printf("������� �迭 ũ��: %d\n", sizeof(int)*size);
	printf("%d\n", sizeof(int));

	free(arr);		// �޸� ����

	return 0;
}