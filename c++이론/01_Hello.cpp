#include <iostream> //input output �帧(���) , .h ���� �� �Ⱥ���. ��� �����ٴ� ��!
#include <cstdio> //<stdio.h c����� ������� ����ϰ� ������.

int main()
{
	std::cout << "Hello, c++!!" << std::endl; //endl�� ����(\n)�� ����, ��� ���ۿ� ���ٰ� �������鼭 ����༭ \n���� �� ����.

	std::cout << "Hello, c++!!" << "\n";

	int x = 10;
	int y = 20;

	std::cout << "x = " << x << "y = " << y << std::endl;
	std::cout << "x = " << x << " " << "y = " << y << std::endl; // �߰��� ���� ������ �̷��Ե� ����.
	std::cout << "x + y = " << x + y << std::endl;

	return 0;
}