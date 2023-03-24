#include <iostream>
using namespace std;

class FruitSeller {
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMenbers(int price, int num, int money) {
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money) {
		int num = money / APPLE_PRICE;
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult() {
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl;
	}
};

class FruitBuyer
{
	int myMoney;		//private:
	int numOfApples;	//private:

public:
	void InitMenmers(int money) {
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller& seller, int money) {
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult() {
		cout << "���� �ܾ� : " << myMoney << endl;
		cout << "��� ���� : " << numOfApples << endl;
	}

};

int main()
{
	FruitSeller seller;
	seller.InitMenbers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMenmers(5000);
	buyer.BuyApples(seller, 2000);		// �����Ǳ���!

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;
}