#include <iostream>
#include <string> //.h����

using namespace std;

int main()
{
	char myStr[] = "Hello C"; //C��Ÿ�� ���ڿ�
	const char* myStr2 = "Hello C"; //�����ͷ� �����ϴ� ���ڿ��� ����� �ʱ�ȭ �Ǵ� �Ŷ� ������ �Ұ�. (C++������ ���ȭ�� �� ����� ��.)

	string str = "Hello C++"; //C++��Ÿ��

	cout << str.size() << endl; //NULL���� ����
	cout << str.length() << endl; //NULL���� ����

	string a("Hello, ");
	string b("C++!!"); //���� �ʱ�ȭ

	string c = a + b; //���ڿ� ����
	cout << c << endl;

	c += ", good!!";	
	cout << c << endl;

	cout << c[4] << endl; //���ڿ��� 4��° ���� ���

	return 0;
}