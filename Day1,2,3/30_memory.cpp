/*
메모리 동작할당(C type)
*/
#include <iostream>

int main()
{
	int* arr;
	int size;

	printf("배열방의 갯수: ");
	scanf_s("%d", &size);		//scanf로 입력을 받을때 주소연산자 필요

	arr = (int*)malloc(sizeof(int));	// heap영역에 할당
	
	//arr = malloc(sizeof(int));
	printf("만들어진 배열 크기: %d\n", sizeof(int)*size);
	printf("%d\n", sizeof(int));

	free(arr);		// 메모리 해제

	return 0;
}