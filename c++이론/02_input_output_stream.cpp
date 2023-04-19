#include <iostream>

//stream : << >>�� ����.(�Է�, ���)

int main()
{
	// >> : input operator
	// << : output operator

	int a;
	std::cin >> a; // scanf������
	std::cout << "�Է��� ���� : " << a << std::endl << std::endl; //���� �� ���

	/*
		������(mainpulator)
	*/

	int num = 100;

	std::cout << std::oct << num << std::endl;
	std::cout << std::dec << num << std::endl;
	std::cout << std::hex << num << std::endl;

	std::cout << std::showbase << std::showpos; //�ѹ� ���� showbase�� ���� ��. showbase(� ��������), showpos(��ȣ)
	std::cout << std::oct << num << std::endl;
	std::cout << std::dec << num << std::endl;
	std::cout << std::hex << num << std::endl;
	std::cout << std::noshowbase << std::noshowpos; //�ѹ� ���� showbase�� ���� ��.


	bool is_true = true;
	bool is_false = false;

	std::cout << std::boolalpha; //�̰͵� �ѹ� ���� ����, true false�� ����� ����� ��
	std::cout << is_true << std::endl;
	std::cout << is_false << std::endl;

	std::cout << std::noboolalpha; //����
	std::cout << is_true << std::endl;
	std::cout << is_false << std::endl;

	return 0;
}