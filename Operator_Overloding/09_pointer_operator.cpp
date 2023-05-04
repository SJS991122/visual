#include<iostream>

using namespace std;

//* -> 

class Number
{
	int num;

public:
	Number (int n) : num(n){}
	void Showdata()
	{
		cout << num << endl;
	}

	// ->
	Number* operator->()
	{
		return this;
	}
	Number& operator*()
	{
		return *this;
	}
};

int main()
{
	Number num(20);
	num.Showdata();
	(*num) = 30;
	num->Showdata();
	//num.operator->() showdata();

	num.operator*() = 30;
	num.operator*().Showdata();

	return;
}