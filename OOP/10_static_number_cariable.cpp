#include<iostream>

using namespace std;

class Test
{
public:
	int value = 1;

	static int count;

	static const int test = 10;
};

int Test::count = 10;

int main()
{
	Test t1, t2;

	t1.value = 10;
	t2.value = 20;

	t1.count = 30;
	t2.count = 40;

	cout << &t1.count << " " << t1.count << endl;
	cout << &t2.count << " " << t2.count << endl;

	cout << &Test::count << " " << Test::count << endl;

	return;
}

/*
	
*/