#include <iostream>

//std::cout : cout�̶�� �̸� ���� -> std
//jeongan::i
//seongho::i   ���� ������ i, ��ȣ ������ i

int ii = 10;

namespace A
{
	void exFunc()
	{
		std::cout << "A�� ������ �Լ�\n" << std::endl;
	}
}

namespace B
{
	void exFunc() //�� �̸� �������� ���� �Լ� �̸��� ������ ���� ����
	{
		std::cout << "B�� ������ �Լ�\n" << std::endl;
	}
}

//�̸� ������ ��ø�ؼ� ����ϴ� ���
namespace myNamespace1
{
	int a;

	void doSomething(){}

	namespace AA
	{
		namespace BB
		{
			namespace CC
			{
				int c;
			}
		}
	}
}

namespace myNamespace1 // �� �̸� �����̶� ���� ����. �и��� �����̶�� ���� ��.
{
	int hello;
}

namespace myNamespace2
{
	int a;
	void doSomething() {}

}

int main()
{
	A::exFunc();
	B::exFunc();

	myNamespace1::AA::BB::CC::c;

	{
		//�̸� ����(::) ���� �Լ��� ȣ���� �� �ִ�.
		using namespace myNamespace1; // myNamespace1 ������ ȣ���Ҷ����� �̸� ������ ���ϰڴ�. ���� Ű�� Ư¡�� �ִ�.
		//using namespace myNamespace2; // �Ѵ� �ϸ� a�� ���� ��ȣ�� ����(ambiguity)�� ����
		a = 10; //�̸� ������ ���ϴ� �� myNamespace1 �̴�.

		myNamespace2::a = 20;
	}

	//using std::cin;
	//using std::cout; 
	//using std::endl;

	using namespace std; //�̸� �����ϱ� �������ϱ� �����ҋ� ���� �����Ұ����� ������ �� ����.

	cout << "hello" << endl;


	int ii = 0;

	ii++; //�� ii �߿� ���������� ii
	cout << ii << endl;

	::ii++; //�� ii �߿� ���������� ii
	cout << ::ii << endl;


	return 0;
}