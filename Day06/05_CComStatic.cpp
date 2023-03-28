#include <iostream>
using namespace std;

void static_Counter() {
	static int cnt = 0;		// = 0을 지워도 0으로 초기화되고 한번만 실행된다. 함수를 빠져나가도 소멸 x
	cnt++;					// 따라서 다시 함수로 돌아와도 0으로 초기화된 후 +1이 아닌 1씩 계속 증가된다.
	cout << "Current static cnt: " << cnt << endl;
}

void Counter() {
	int cnt = 0;
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}

int main(void) {
	for (int i = 0; i < 10; i++) {
		static_Counter();
		Counter();
	}
	return 0;
}