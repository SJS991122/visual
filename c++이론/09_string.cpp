#include<iostream>
#include<string>
using namespace std;

int main()
{
	char myStr[] = "hello c";
	const char* myStr2 = "hello c"; //const�� �ٿ��� ������ ����������
	string str = "hello c++";
	cout << str.size() << endl;
	cout << str.length() << endl;
	string a("hello, ");
	string b("c++!");
	string c = a + b;
	cout << c << endl;
	c += ", good!!";
	cout << c << endl;
	cout << c[4] << endl;
	return;
}