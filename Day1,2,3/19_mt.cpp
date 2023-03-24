#include <stdio.h>

int g = 0;		// 전역 변수

void func()
{
	printf("func() : %p\n", func);
}

int main()
{
	int n = 10;		// 지역 변수
	static int c;
	const int d = 10;
	char ary[10] = "hi";

	func();
	printf("local n : %p\n", &n);
	printf("global g : %p\n", &g);
	printf("static c : %p\n", &c);
	printf("const d : %p\n", &d);
	printf("array : %p\n", ary);

	return 0;
}

/*
메모리 영역은 크게 나누면
1. 코드세그먼트
2. 데이터 세그먼트 - 1) 동적 Data(stack), 2) 정적 Data(문자열, 상수...)
*/