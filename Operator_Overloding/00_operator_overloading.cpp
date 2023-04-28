#include<iostream>

using namespace std;

/*
	. .*  :: ?: # ##
	
	
	&
	|
	^
*/

class Number
{
public:
	Number(int num)
		:num(num)
	{}
	void SetNum(int num)
	{
		GetNum()
		return num;
	}
private:
	int num;
};

int main()
{
	Number a(10), b(20);
	//int result = a + b;
	
	int result = a.GetNum() + b.GetNum();
	a.SetNum(result);

	return;
}