#include<iostream>

using namespace std;

class Point2D
{

public:
	int x, y;

};

class Moster
{

	string name;
	Point2D position1;
	Point2D* position2;

public:
	//composition
	Moster(int x, int y)
	{
		position1.x = x;
		position1.y = y;
	}
	//Aggregation
	Moster(Point2D* point)
	{
		this->position2 = point;
	}
};

int main()
{
	Moster mon1(10, 20);

	Point2D point;
	Moster mon2(&point);

	return;
}