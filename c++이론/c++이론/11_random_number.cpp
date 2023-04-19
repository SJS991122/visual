#include <iostream>
#include <random>

#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	//C��Ÿ�� ���� ���� ���
	srand((unsigned int)time(NULL));

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}

	cout << endl; //���� ����

	//C++��Ÿ�� ���� ���� ���
	random_device rd; //���� ������ �õ尪(��ǻ�Ͱ� �����ϴ� ��� ����� ������ ��Ȳ

	mt19937 messenne(rd());

	uniform_int_distribution<> randNUM(1, 10);// ������ Ȯ���� ������ �����ǰ� �ϴ� �۾�(������) : ������ Ȯ���� 1���� 10���� ������ ��.

	for (int i = 0; i < 10; i++)
		cout << randNUM(messenne) << " ";

	cout << endl;

	return 0;
}

