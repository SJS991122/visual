#include <iostream>

using namespace std;
//C�� C++�� �Լ� ȣ�� ����� �ٸ�.
//C++������ �Լ��� �ߺ��ؼ� �� �� ������ �Ű������� ������ ��� ��, ���� Ÿ���� ���� �Լ��� ã���ִ� �ý���
int add(int a, int b) {	return a + b;}
float add(float a, float b) {return a + b;}
int add(int a) { return a + 1; }
int add(int a, int b, int c) { return a + b + c; }

using integer = int; //int a == integer a
//integer add(integer a, integer b) { return a + b; } �� ù��° �Լ��� ���� ����̴ϱ� �� �� ����.

void output(int value) {}
void output(unsigned int value){}
void output(float value){}

int main()
{ //���� �ڷ���, �Լ��� ���� �ڷ����� ����ϱ� �������� auto�� �� ����
	auto result1 = add(10, 20);
	auto result2 = add(10.1f, 20.0f);
	auto result3 = add(10, 20, 30);

	output(1); //��ȣ�� ������ ����(int ���� unsigned ���� ��ȣ�ϴϱ�)
	output(1.0f);

	output('c'); //�ڽŰ� ��ġ�ϴ� �Լ��� ã�� ���ϸ� �� ��ȯ�� �ؼ� ����� �� ã��
				//char, unsigned char, short, int ������ ����Ѱ� ã��.

	return 0;
}