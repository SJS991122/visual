#include<iostream>
#include<list>

using namespace std;

int main()
{
	list<int> list;
	for (int i = 0; i < 10; i++)
		list.push_back(i);

	for (const auto& ele : list)
		cout << ele << " ";
	return;
}