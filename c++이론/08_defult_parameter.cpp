#include<iostream>

using namespace std;
void print(int x = 7)
{
	cout << x << endl;
}
void print(int x, int y = 7)
{
	cout << x << y << endl;
}
void test(int x = 10, int y = 10, int z = 10)
{}
int main()
{
	print();//������ü�� �ٸ���.
	//print(7);//��ȣ�� ����
	test(10, 10, 3);
	return;
}