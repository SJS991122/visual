#include<iostream>
using namespace std;

namespace A
{
	void exfunc()
	{
		std::cout << "A가 정의한 함수\n" << std::endl;
	}
}
namespace B
{
	void exfunc()
	{
		std::cout << "B가 정의한 함수\n" << std::endl;
	}
}
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
namespace myNamespace2
{
	int;
}
int main()
{
	A::exfunc();
	B::exfunc();
	myNamespace1::AA::BB::CC::c;

	{
		using namespace myNamespace1;
		//using namespace myNamespace2;

		a = 10; //ambing
		myNamespace2::a = 20;
	}

	//using std::cin;
	//using std::cout;
	//using std::endl;
	cout << "hello" << endl;
	int ii = 0;

	ii++;
	cout << ii << endl;

	::ii++;
	cout << ::ii << endl;
	float f1 = 1.1f;
	cout << f1 << endl;

	return;
}