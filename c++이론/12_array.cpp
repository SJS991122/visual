#include <iostream>
#include <array>

int main()
{
	using namespace std;

	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[]{ 1, 2, 3, 4, 5 }; //c++������ =��� ��
	//int arr3[](1, 2, 3, 4, 5); //�̰� �Ұ���
	
	/*
		STL : Standard Template Libraries
		�迭 ������ �����ϰ� ¥�� ������ ���

	*/

	//< >: templete
	std::array<int, 5> arr4; //int �� 5���� arr4��� �迭�� �����, �� ������
	array<int, 5> arr5{ 1, 2, 3, 4, 5 }; //�ʱ�ȭ�� ����

	cout << arr5[0] << endl;
	cout << arr5[1] << endl;
	cout << arr5.at(2) << endl; //at���� ���ҿ� ���� ����
	cout << arr5.at(3) << endl;
	cout << arr5.at(4) << endl;
	cout << arr5.size() << endl; //size()�� ������ ���� ����

	//cout << arr5[5] << endl; //�����Ⱚ �������� ��·�� ������ ��.
	//cout << arr5.at(5) << endl; //���� ó���� �Ǿ ����. ��� ����. ������.

	return 0;
}