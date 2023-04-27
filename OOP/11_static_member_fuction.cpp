#include<iostream>

using namespace std;

class Test
{
	int value;
	static int value2;
public:
	Test() {}
	void Temp1() { this->value; }
	void Temp1()const { this->value; }

	//static void Temp2() { this->value; }//단순히 포함됨
	static void Temp2() { value2; }

	int test;
};

int main()
{
	//Test::Temp1()
	Test t1;
	t1.Temp1();

	Test::Temp2();

	void (*ptr1)() = Test::Temp2;
	//void (*ptr1)() = Test::Temp1; 알수가없기에 불가

	/*
		멤버 포인터
	*/

	int Test::* ptr2 = &Test::test;
	t1.*ptr2 = 10;

	void (Test:: * ptr3)() = &Test::Temp1;
	(t1.*ptr3)();

	return;
}