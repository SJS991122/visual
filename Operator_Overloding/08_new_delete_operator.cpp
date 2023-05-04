#include<iostream>

using namespace std;

class Point
{
	int xpos, ypos;

public:

	Point(int x = 0,int y = 0) : xpos(x), ypos(y)
	{}
	friend ostream& operator <<(ostream& os, const Point& pos)
	{
		os << '[' << pos.xpos << "," << pos.ypos << ']' << endl;
		return os;
	}
	void* operator new(size_t size)
	{
		void* adr = new char[size];
		return adr;
	}

	void operator delete(void* adr)
	{
		delete[] adr;
	}
};

int main()
{
	Point* ptr = new Point(3, 4);//static 
	



	return;
}