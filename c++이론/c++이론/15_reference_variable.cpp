#include<iostream>

using namespace std;

/*
	L-value R-value
	int a = 10;
	L-value : ���߿� �ٽ� ������ ������ ��
	R-value : ���� ������ ������ �Ұ����� ��
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