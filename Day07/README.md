## 7일차

- 상속과 다형성

- 객체 포인터
  - 포인터 배열 : 포인터로 이루어진 배열  
  ```
  int n1 = 10, n2 = 20, n3 = 30;
  int* ary[3] = {&n1, &n2, &n3);
  ```
  - 배열 포인터 : 배열을 가리키는 포인터  
  ```
  int* pa = &a;
  int ary[3] = {1, 2, 3};
  int* pary = ary;				// 1차원 배열을 가리키는 배열포인터
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
  int (*parr)[3] = arr;			// 2차원 배열을 가리키는 배열포인터
  ```

- 가상함수
  - 함수 오버라이딩 => 해당 객체에서 호출되어야 하는 함수를 바꾼다는 의미  
  부모 클래스에서 virtual 선언하면 자식 클래스 모두 적용된다.

  - 순수 가상함수 : 함수의 몸체가 정의되지 않은 함수  
  잘못된 객체 생성 막을 수 있다.  

- 추상 클래스 : 순수 가상함수로 선언한 클래스

- 다형성
