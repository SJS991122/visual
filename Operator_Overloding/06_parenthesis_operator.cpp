#include<iostream>

// ()

using namespace std;

class Counter
{
	int count = 0;

public:
	int operator()(int i) { return count += i; }

};
class Point
{
	int xpos, ypos;
public:
	Point(int x=0,int y=0): xpos(x),ypos(y){}
	Point operator+(const Point& pos)const
	{
		return Point(xpos + pos.xpos, ypos + pos.ypos);
	}
	friend ostream& operator<<(ostream);
};
class Adder
{
public:
	int operator()(const int& n1, const int& n2)
	{
		return n1 + n2;
	}
	double operator()(const double& n1, const double& n2)
	{
		return n1 + n2;
	}
	Point operator()(const Point& n1, const Point& n2)
	{
		return n1 + n2;
	}
};
int main()
{	
	Counter ct;
	cout << ct(10) << endl;//Functor, Functo Object
	cout << ct(20) << endl;
	cout << ct(30) << endl;

	cout << endl;

	Adder adder;

	cout << adder(1, 2) << endl;
	cout << adder(1.5, 1.7) << endl;
	cout << adder(Point(3, 4), Point(7, 9));

	return;
}