#include<iostream>

using namespace std;

#pragma region 1. �����Լ��� ���� ������ �����ε�
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

#pragma region 2. ����Լ��� ���� ������ �����ε�
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
	���� ������ +, +vector = vector, -vector
	���� ������ +, vector = vector, // + - *
	���� ������ *, vector * 3
	�߰� ������
	=����++vector
	=���� vector++
*/
//����
#pragma region ��� ������ �����ε�
class Vector
{
public:
	Vector(int x, int y, int z) : x(x),y(y),z(z) {}
	
	Vector operator+() const
	{
		//return Vector{ x,y,z };
		return *this;
	}

	//����
	Vector& operator++()
	{

	}

	//����
	Vector& operator++(int)//dummy
	{

	}

private:
	int x, y, z;//����� ǥ�� z=1�� �Ұ�
	
};

#pragma endregion
//�����̰���