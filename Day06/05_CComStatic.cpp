#include <iostream>
using namespace std;

void static_Counter() {
	static int cnt = 0;		// = 0�� ������ 0���� �ʱ�ȭ�ǰ� �ѹ��� ����ȴ�. �Լ��� ���������� �Ҹ� x
	cnt++;					// ���� �ٽ� �Լ��� ���ƿ͵� 0���� �ʱ�ȭ�� �� +1�� �ƴ� 1�� ��� �����ȴ�.
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