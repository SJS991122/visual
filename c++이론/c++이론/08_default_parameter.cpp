#include <iostream>
//�Լ� ���� �� ����ϴ� �⺻���� default ��.( �Ű������� �ƹ��͵� �Է� ���� �ʾ��� �� �ԷµǴ� �⺻ ��.)
//default para�� overloading�� ���� ���� ������.
using namespace std;

void print(int x = 7) // �ƹ��͵� �ȵ����� 7�� �־��ٰ� ����.
{
	cout << x << endl;
}

void print(int x, int y = 7) // �Ű����� �ϳ����� �⺻ ���� �൵ �Ǵµ�, �� �Ű������� ���� ���������� �� �Ű������� �����ϴ� ���� �ȵ�.
{
	cout << x << y << endl;
}

void test(int x = 10, int y = 10, int z = 10)
{

}

int main()
{
	print(); // 7
	//print(2); // 2�ε�, �ι�° print �Լ����� y�� �����ϰ� x���� 2�� ���� �Ͱ� ��ȣ�� ������ �Ͼ

	test(10, 10, 3); // �ٲ� �ְ� ���� �ڸ��� �Ű������� �ٲ� �ְ� �������� ����������.

	return 0;
}