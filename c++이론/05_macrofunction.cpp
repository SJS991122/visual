#include<iostream>

using namespace std;
#define PLUS(a, b) ((a) + (b))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))
inline int Max(int a, int b)
{
	return (a > b) ? a : b;
}
int main()
{
	cout << PLUS(1, 2) << endl;
	cout << PLUS(1, 2) * PLUS(1, 2) << endl; //1+2 * 1+2
	cout << MAX(1, 2) << endl;
	cout << Max(1, 2) << endl;
	int a = 10;
	int b = 10;
	int result = a + b;

	return;
}