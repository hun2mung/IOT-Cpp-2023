# include <stdio.h>
/*
// 1번째
int main()
{
   int n1 = 10;
   int n2 = 20;

   printf("변경 전 n1: %d \t n2: %d\n", n1, n2);
   n1 = 20;
   n2 = 10;

   printf("변경 후 n1: %d \t n2: %d \t", n1, n2);

   return 0;
}
*/


// 2번째: 함수로 구현 : call by value
/*
void swap(int n1, int n2)
{
	int temp = n1;
	n1 = n2;
	n2 = temp;
	printf("호출 후 n1: %d \t n2: %d\n", n1, n2);
}

int main()
{
	int n1 = 10, n2 = 20;

	printf("호출 전 n1: %d \t n2: %d\n", n1, n2);	// 10 20

	swap(n1, n2);		// 20 10	-> 값이 변경 됨.

	printf("호출 후 n1: %d \t n2: %d\n", n1, n2);	// 10 20 -> main에 n1, n2는 변경되지 않았다는 것을 알 수 있음

	return 0;
}
*/

// 3번 째 포인터로 구형 : call by reference
void swap(int* pn1, int* pn2)
{
	int temp = *pn1;
	*pn1 = *pn2;
	*pn2 = temp;
	printf("호출 후 n1: %d \t n2: %d\n", *pn1, *pn2);
}

int main()
{
	int n1 = 10, n2 = 20;

	printf("호출 전 n1: %d \t n2: %d\n", n1, n2);	// 10 20

	swap(&n1, &n2);		// 20 10	-> 값이 변경 됨.

	printf("호출 후 n1: %d \t n2: %d\n", n1, n2);	// 10 20 -> main에 n1, n2도 변경됨.

	return 0;
}