#include<stdlib.h>
#include<time.h>

#include<iostream>
#include<random>

using namespace std;

int main()
{
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 10; i++)
	{
		printf("%d ", rand() % 10);
	}
	cout << endl;
	random_device rd;
	mt19937 messenne(rd());
	uniform_int_distribution<> randNUM(1, 10);
	for (int i = 0; i < 10; i++)
		cout << randNUM(messenne) << " ";
	cout << endl;
	return;
}