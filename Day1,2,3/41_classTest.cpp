#include <iostream>
using namespace std;

class Myclass {

private:		// �ܺ� ���� ����
	int private_val;
public:			// �ܺ� ���� ����
	int public_val;
protected:		// ��ӿ��� ���� ����
	int protected_val;
public:			// ����Լ��� ������ public
	void set(int an) {
		private_val = an;
	}

	void get() {
		cout << "public_val : " << public_val << endl;
		cout << "private_val : " << private_val << endl;
	}
};


int main()
{
	Myclass o;
	//o.private_val;		// ��� �Ұ�
	o.public_val = 100;
	//ob.protected_val;		// ��� �Ұ�

	o.set(200);

	o.get();

	return 0;
}