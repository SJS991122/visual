#include<iostream>

using namespace std;

int main()
{
	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };
	for (int i = 0; i < sizeof(fibonacci) / sizeof(int); i++)
		cout << fibonacci[i] << endl;
	for (const auto& number : fibonacci)
		cout << number << endl;
	for (const auto& number : { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 })
		cout << number << endl;
	int* test = new int[10];
	return;
}