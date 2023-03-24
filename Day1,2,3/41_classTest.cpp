#include <iostream>
using namespace std;

class Myclass {

private:		// 외부 접근 불허
	int private_val;
public:			// 외부 접근 가능
	int public_val;
protected:		// 상속에서 접근 가능
	int protected_val;
public:			// 멤버함수는 무조건 public
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
	//o.private_val;		// 사용 불가
	o.public_val = 100;
	//ob.protected_val;		// 사용 불가

	o.set(200);

	o.get();

	return 0;
}