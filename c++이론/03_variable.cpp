#include <iostream>


int main()
{
	//�ʱ�ȭ
	int x = 10; //copy initialization
	int y(10); // direct initialization
	int z{ 10 }; //uniform initialization

	int a = 1.1; //warning ������ ������ �ȳ����� �� �����ϰ� �غ��� ��� ����. 0.1�� �߸��⶧��
	//int b{ 1.1 }; //error int ���� double���� �־��ٴ� ���� ��Ȯ�ϹǷ� ����
	char c = 500; //warning ���� �߸�
	//char d{ 500 }; //error 

	/*
		limits �Ѱ谪
	*/

	std::cout << std::numeric_limits<short>::max() << std::endl;
	std::cout << std::numeric_limits<int>::min() << std::endl;
	std::cout << std::numeric_limits<int>::max() << std::endl;
	std::cout << std::numeric_limits<float>::min() << std::endl;
	std::cout << std::numeric_limits<float>::max() << std::endl;

	/*
		casting
	*/

	int i = 10;
	float k = 10.0f;

	std::cout << k << std::endl;
	std::cout << (int)k << std::endl; //(int)k : ����� ����ȯ << C��Ÿ��, ������
	std::cout << int(k) << std::endl; //C++��Ÿ��
	std::cout << static_cast<int>(k) << std::endl; //C++��Ÿ��, ���� ����, ���� ���� ��

	/*
		const vs constexpr
	*/
	const int c1(123); //���� �ʱ�ȭ
	//const�� �ڷ����� ��Ÿ�Ӷ� ������

	int i1 = 10;
	const int c2 = i1; //����� ������ �ʱ�ȭ,

	int arr1[c1]; //c1�� ����� �迭�� ���� �� ����.
	//int arr2[c2]; // ������ ���� c2�� �ڷ����� � ������ �������� ���̹Ƿ� �Ұ���

	constexpr float PI = 3.141592f;

	float PI2 = 3.141592f;
	//constexpr float PI3 = PT2; //�Ұ���, ����� �־���� ��

	constexpr int arrSize = 10;
	int arr[arrSize];


	return 0;
}