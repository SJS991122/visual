#include <iostream>

struct Test
{
	int a;
	int b;
	std::string str;

	void printNUM()
	{
		std::cout << "Hello" << std::endl;
	}
};

int main()
{
	//int* ptr = (int*)malloc(5 * sizeof(int));
	//if (ptr == NULL)
	//	exit(1); //���� ó���� ������ ��������
	//free(ptr);
	//ptr = NULL;

	//int* ptr1 = new int; //C++ �����Ҵ�
	//delete ptr; //����, �� �ʱ�ȭ ������ �ʾƵ� ��

	//int* ptr2 = new int(7); //ũ�⸦ ���� �ʱ�ȭ
	//delete ptr2;

	//int* ptr3 = new int{ 7 };
	//delete ptr3;

	//int* ptr4 = new(std::nothrow) int{ 7 }; //���������� ����ó���� ���ֱ� ���ؼ� �̷��� �ʱ�ȭ

	//if (ptr4 == nullptr) //���� ó��
	//	std::cout << "Error";

	//if (ptr4 != nullptr)
	//	delete ptr4;
	//
	//int* arr = new int[10]{ 1, 2, 3, 4, 5, 6 };
	//delete[] arr;

	////������ �迭�� 2����ó�� ����� �� �ִ�.
	//int** ptrArr = new int* [5];

	//ptrArr[0] = new int[10];
	//ptrArr[1] = new int[10];
	//ptrArr[2] = new int[10];
	//ptrArr[3] = new int[10];
	//ptrArr[4] = new int[10];

	////���ﶧ���� �ȿ� �ͺ��� ����� �ٱ��� ����
	//for (int i = 0; i < 5; i++)
	//	delete[] ptrArr[i];

	//delete ptrArr;

	Test* test = new Test; //malloc���� �غ���.

	test->a = 10;
	test->b = 20;
	test->str = "hello";
	test->printNUM();

	//malloc�� new�� ���� : malloc�� ����ü���� pod(plain old data : ���ӵ� �޸�) Ÿ���� ���ڷ� �޾ƿͼ� �� �� ����
	//string, �Լ� ���� �� pod Ÿ���� �ƴ϶� malloc �� �� ����.

	return 0;
}

/*
<����>

���� ���� �ߴ� ��
�Լ� ��� ������ ���� �۾��� ����(���� ���� ī��Ʈ, ���� �ߺ� üũ, ���� �׸��� ��)
���� ��ü�� �����ͷ� �޾ƿ���


����
������ �����ϰ� ��������(1������ 10��, ��(?))..
�÷��̾� �� �Է�
�÷��̾� �̸� ���� �Է�

�÷��̾���� ���� �ִ� �� �������� �ְ�, �� ��, ����� �̰�,
������� �׸����� ���ϱ� �������.

*/