#include<iostream>

using namespace std;

class data
{
	
public:
	void setdata(int hpdata, int attackdata, float expdata)
	{
		hp = hpdata;
		attack = attackdata;
		exp = expdata;
	}
	void setdata2(data data)
	{
		hp = data.hp;
		attack = data.attack;
		exp = data.exp;
	}

	int gethp() { return hp; }
	int getattack() { return attack; }

private:
	int hp;
	int attack;
	float exp;
};
class fruitseller
{
	int appleprice;
	int numofapple;
	int mymoney;
public:
	void initmembers(int price, int num, int money)
	{
		appleprice = price;
		numofapple = num;
		mymoney = money;
	}
	int saleapples(int money)
	{
		int num = money / appleprice;
		numofapple -= num;
		mymoney += money;

	}
};
class fruitbuyer
{
	int mymoney;
	int numofapples;
public:
	void initmembers(int money)
	{
		mymoney = money;
		numofapples = 0;
	}
	void buyapples(fruitseller& seller, int money)
	{
		numofapples += seller.saleapples(money);
		mymoney -= money;
	}
	void showbuyresult()
	{
		cout << "현재 잔액 : " << mymoney << endl;
		cout << "사과 개수 : " << numofapples << endl;

	}
};
int main()
{
	fruitseller seller;
	seller.initmembers(1000, 20, 0);

	fruitbuyer buyer;
	buyer.buyapples(5000);

	buyer.buyapples(seller, 2000);

	return;
}