#include<iostream>

using namespace std;

/*
	L-value R-value
	int a = 10;
	L-value : 나중에 다시 접근이 가능한 값
	R-value : 식이 끝나면 접근이 불가능한 값
*/
int Test1(int& a) //copy
{
	return a;
}

int Test2(int&& a) // move
{
	return a;
}

int main()
{
	int val = 5;
	int& r = val;
	int* ptr = &val;
	r = 10;
	cout << val << endl;
	cout << r << endl;
	/*int& r2;
	int& r3 = 10;*/
	const int& r4 = 10;
	int&& rr = 10;
	return;
}