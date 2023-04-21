#include<iostream>

using namespace std;

class test
{
public:
	/*test()
	{
		cout << "constructor" << endl;
	}
	~test()
	{
		cout << "destructor" << endl;
	}*/
};

class intarray
{
public:
	intarray(const int& inlength)
	{
		length = inlength;
		arr = new int[length];
		cout << "constructor" << endl;
	}
	~intarray()
	{
		delete[] arr; //유지시켜준다
		cout << "destructor" << endl;
	}
private:
	int* arr = nullptr;
	int length = 0;
};

int main()
{
	test test1;
	cout << "######### 1" << endl;
	{
		cout << "######### 2" << endl;
		test test2;
		cout << "######### 3" << endl;
	}
	cout << "######### 4" << endl;
	while (true)
	{
		intarray myarr(1000);
	}
	return;
}