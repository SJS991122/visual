#include<iostream>

using namespace std;

/*
	this pointer : 객체 자신을 가리키는 용도로 사용되는 포인터
*/

//class test
//{
//	int num;
//public:
//	test(int n) :num(n)
//	{
//		cout << "num : " << num << endl;
//		cout << "num address : " << &num << endl;
//		cout << "this address : " << this << endl;
//	}
//	void showtestdata()
//	{
//		cout << num << endl;
//	}
//	test* getthispointer()
//	{
//		return this;
//	}
//};
//class test2
//{
//	int a, b, c;
//public:
//	test2() {}
//	~test2() {}
//	auto /*this call*/geta()//생략되있다.
//	{
//		cout << this << endl;
//		return a;
//	}
//	//void seta(const int& a) { a = a; }//name hiding
//	void seta(const int& a) { this->a = a; }
//};
//int main()
//{
//	test t1(100);
//	test* ptr1 = t1.getthispointer();
//	cout << ptr1 << endl;
//	ptr1->showtestdata();
//
//	test t2(200);
//	test t2(100);
//	test* ptr2 = t2.getthispointer();
//	cout << ptr2 << endl;
//	ptr2->showtestdata();
//	return;
//}

#pragma region chaining member function
class Calc
{
	int value;
public:
	Calc(int vaule):value(value){}

	//void add(int value) { this->value += value; }
	//void sub(int value) { this->value -= value; }
	//void mul(int value) { this->value *= value; }
	//void div(int value) { this->value /= value; }
	//void mod(int value) { this->value %= value; }

	Calc& add(int value) { this->value += value; return *this; }
	Calc& sub(int value) { this->value -= value; return *this; }
	Calc& mul(int value) { this->value *= value; return *this; }
	Calc& div(int value) { this->value /= value; return *this; }
	Calc& mod(int value) { this->value %= value; return *this; }
};
int mian()
{
	//calc calc(10);
	//calc.add(5);
	//calc.sub(2);
	cout << "a" << "b" << "c" << "d" << "e" << endl;
	Calc calc(10);
	calc.add(5).div(2).mod(3).mul(4).sub(1);

	//ananimous	object
	Calc(20).add(1).add(2);
	return;
}
#pragma endregion

화살표게임