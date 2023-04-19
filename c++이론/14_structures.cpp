#include<iostream>

using namespace std;
struct person
{
	void Print()
	{
		cout << age << endl;
	}
	int age;
	float weight = 50.0f;
	string name = "Jung";
};

int main()
{
	person p1;
	p1.Print();

	return;
}

/*
	함수 호출 규약 (function callong)
*/