#include <iostream>
using namespace std;

template <typename T>
T Add(T num1, T num2) {
	cout << "T Add(T num1, T num2)" << endl;
	return num1 + num2;
}

int Add(int num1, int num2) {
	cout << "Add(int num1, int num2)" << endl;
	return num1 + num2;
}

double Add(double num1, double num2) {
	cout << "Add(double num1, double num2)" << endl;
	return num1 + num2;
}

//아래보다 더 추구되는 형식
int main(void) {
	cout << Add(15, 20) << endl;
	cout << Add(2.9, 3.7) << endl;
	cout << Add<int>(15, 20) << endl;
	cout << Add<double>(2.9, 3.7) << endl;

	return 0;
}
