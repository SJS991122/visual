#include<iostream>

using namespace std;

class fraction
{
public:
	fraction()
	{
		cout << "constructor" << endl;
	}//기본적으로 1번제공하며 초기화시킨다
	fraction(int a, int b)
	{
		cout << "constructor2" << endl;
	}
	/*fraction(int a = 7, int b = 8)
	{
		cout << "constructor2" << endl;
	}*/

	fraction(const fraction& data)
	{
		cout << "constructor3" << endl;
	}
	fraction(fraction&& data) noexcept
	{
		cout << "constructor4" << endl;
	}

private:
	int numerator = 10;
	int denominator = 20;
};
int main()
{
	fraction frac;
	fraction frac1(1, 2);
	fraction frac11(1.0, 3);
	//fraction frac111{ 1.0,3 };
	fraction frac2(frac1);
	fraction frac3(std::move(frac1));

	return;
}