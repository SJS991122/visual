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
	�Լ� ȣ�� �Ծ� (function callong)
*/