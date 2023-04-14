#include<iostream>
#include<array>


int main()
{
	using namespace std;

	int arr1[] = { 1,2,3,4,5 };
	int arr2[]{ 1,2,3,4,5 };
	//int arr3[](1, 2, 3, 4, 5);
	/*
		STL : Standard Template Libraries
	*/
	//<>: templete
	array<int, 5>arr4;
	array<int, 5> arr5{ 1,2,3,4,5 };
	cout << arr5[0] << endl;
	cout << arr5[1] << endl;
	cout << arr5.at(2) << endl;
	cout << arr5.at(3) << endl;
	cout << arr5.at(4) << endl;
	cout << arr5.size() << endl;
	

	return;
}