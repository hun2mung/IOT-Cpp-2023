#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "create obj : " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj : " << num << endl;
	}
	void showTempInfo() {
		cout << "My num is " << num << endl;
	}
};
// �ӽð�ü�� ���� ������ �Ѿ�� �ٷ� �Ҹ�!!!
int main(void) {
	Temporary(100);			// �ӽ� ��ü ���� ���� ��� -> ������ ȣ�� �� �ٷ� �Ҹ�.
	cout << "**************** after make!" << endl << endl;

	Temporary(200).showTempInfo();		// ������ ȣ��->�Լ� ȣ��->�Ҹ��� ȣ��
	cout << "**************** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);			// �����ڷ� �ӽð�ü ����. -> �����ٿ��� �Ҹ���� �ʰ� ������!!!
	cout << "**************** end of main!" << endl << endl;

	return 0;
}