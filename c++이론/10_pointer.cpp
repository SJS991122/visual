#include <iostream>

int main()
{
	//������ ������ �ݵ�� null �� �ʱ�ȭ ����� �߾���
	int* ptr = nullptr; //NULL�� �ƴ϶� nullptr
	int* ptr2(nullptr);
	int* ptr3{ nullptr };

	std::nullptr_t nptr; //������ null�� �޴� ptr(�� ������ ����)

	return 0;
}