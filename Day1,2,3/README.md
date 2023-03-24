## 1일차

- 입출력 방식
  - std::cout <<
  - std::cin >>
- 함수 오버로딩(다중 정의)
- 매개변수 디폴트 값
- 인라인 함수
  - 매크로 함수

## 2일차

- namespace(이름공간)
  - 함수의 선언은 헤더파일에 저장.
  - 함수의 정의는 소스파일에 저장.
  - namespace 기반 함수 선언과 정의
  - using

- const 상수화
  - *(포인터), &(주소)

- 메모리 영역
  - 코드 세그먼트
  - 데이터 세그먼트
    - 동적 Data, 정적 Data

- call by value / call by reference

- 자료형 bool

- 참조자(별칭)
  - call by reference

## 3일차
- 메모리 할당
  - malloc & free
  - new & delete

- 구조체
  - enum(enumerate : 열거하다)

- 클래스(객체 지향 프로그래밍)
  - 클래스 내 멤버변수, 멤버함수 -> 원칙적으로 클래스 내 멤버변수는 클래스 내 멤버함수만 접근 가능.(기본 private)
  - 접근제어 지시자
    - public : 어디서든 접근 허용
    - protected : 상속관계에서 유도 클래스에서 접근 허용
    - private : 클래스 내에서만 접근 허용
  - 정보은닉