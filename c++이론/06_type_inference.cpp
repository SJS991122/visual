#include <iostream>
//Ÿ�� �߷�

using namespace std;

auto add(int x, int y) -> int; //�̷��� �Լ��� ���൵ ��. ��� �ð��� ���� �ɸ������� ���� ��ȯ Ÿ���� ����� �� �� ����(�׷��� �Ǹ� ���Ǽ��� ������)


int main()
{
	int a = 10;
	float b = 3.14f;
	double c = 45.0;

	//float result = a + b; 
	auto result = a + b; //int + float = float���� �����Ϸ��� �˾Ƽ� Ÿ�� ��ŷ�� ���� Ÿ������ �߷�����.
	return 0;
}

auto add(int x, int y) -> int //�Ű������� auto�� �޾ƿ� ���� ����.
{
	return x + y;
}
