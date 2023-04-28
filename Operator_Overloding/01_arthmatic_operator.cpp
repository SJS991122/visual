#include<iostream>

using namespace std;

#pragma region 1. 전역함수에 의한 연산자 오버로딩
//class Won
//{
//public:
//	Won(int value):value(value){}
//
//	int GetValue()const { return value; }
//
//private:
//	int value;
//	
//	friend int operator+(const Won& lhs, const Won& rhs);
//
//	friend Won operator-(const Won& lhs, const Won& rhs)
//	{
//		return lhs.value - rhs.value;
//	}
//};
//
//int main()
//{
//	Won l(10), r(10);
//
//	int result = l + r;
//	cout << result << endl;
//
//	Won result2(l - r);
//
//	cout << result2.GetValue() << endl;
//
//	return;
//}
//
//int operator+(const Won& lhs, const Won& rhs)
//{
//	return lhs.value + rhs.value;
//}
//
///*
//	operator+(a, b);
//*/
#pragma endregion

#pragma region 2. 멤버함수에 의한 연산자 오버로딩
class Won
{
public:
	Won(int value):value(value){}
	
	int GetValue()const { return value; }
	
	//1.operator+(r)
	int operator+(const Won& rhs)
	{
		return value + rhs.value;
	}

	Won operator-(const Won& rhs)
	{
		return value + rhs.value;
	}

private:
	int value;
};
int main()
{
	Won l(10), r(10);

	int result = l + r;
	cout << result << endl;

	Won result2 = l - r;
	cout << result2.GetValue() << endl;

	return;
}

#pragma endregion

/*
	단항 연산자 +, +vector = vector, -vector
	이항 연산자 +, vector = vector, // + - *
	이항 연산자 *, vector * 3
	중감 연산자
	=전위++vector
	=후위 vector++
*/
//숙제
#pragma region 산술 연산자 오버로딩
class Vector
{
public:
	Vector(int x, int y, int z) : x(x),y(y),z(z) {}
	
	Vector operator+() const
	{
		//return Vector{ x,y,z };
		return *this;
	}

	//전위
	Vector& operator++()
	{

	}

	//후위
	Vector& operator++(int)//dummy
	{

	}

private:
	int x, y, z;//상대적 표현 z=1로 할것
	
};

#pragma endregion
//지렁이게임