#include<iostream>

using namespace std;

class Won
{
	int value = 0;
public:
	Won(int value=0): value(value){}

	operator int()
	{
		return value;
	}

};

void Print(int val)
{
	cout << val << endl;
}

class Point
{
private:
	float x = 0.0f;
	float y = 0.0f;
	float z = 0.0f;
public:
	Point(float x, float y, float z)
		:x(x),y(y),z(z)
	{}
	operator float* ()
	{
		return &;
	}
};

void PrintPoint(float points[3])
{
	cout << points[0] << endl;
	cout << points[1] << endl;
	cout << points[2] << endl;
}

int main()
{
	Won w(10);

	Print(w);

	Point p(1.0f, 1.0f, 3.0f);
	PrintPoint(p);

	return;
}

//과제 시간 구하기
class hour
{

};

class minute
{

};

class second
{

};

class millisecond
{

};

hour h(1);
Printhour(h);
Printminute(h); 60 
Printsecond(h); 60
Printmillisecond(h); 60


//리듬 인게임만들기
