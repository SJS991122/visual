#include<iostream>

// []

using namespace std;

class intArry
{
	int list[3];
public:
	int Get(int index) { return list[index]; }
	void Set(int index, int value) { list[index] = value; }
	int* Getlist() { return list; }
	int& operator[](int index)
	{
		if (index < 0 || index >= 10)
		{
			cout << "Array index out of bound exception" << endl;
		}
		return list[index];
	}
};

int main()
{
	int arr[3] = { 1,2,3 };
	cout << arr[-1] << endl;
	cout << arr[3] << endl;

	intArry list;
	list.Set(0, 1);
	list.Set(1, 2);
	list.Set(2, 3);
	cout << list.Get(0) << endl;
	cout << list.Get(1) << endl;
	cout << list.Get(2) << endl;

	auto arr = list.Getlist();
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	
	list[0] = 1;
	list[1] = 2;
	cout << list[0] << endl;
	cout << list[1] << endl;
	cout << list[20] << endl;

	return;
}