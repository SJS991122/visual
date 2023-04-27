#include<iostream>

using namespace std;

#pragma region friend global function
class A
{
	int value = 1;

	friend void dosomething1(const A& a);
	friend void dosomething1(const A& a)
	{

	}
};

void dosomething1(const A& a)
{
	cout << a.value << endl;
}

int main()
{


	return;
}

#pragma endregion


#pragma region friend member class
class A
{
public:
	void attack(B& b);

private:
	int a;
};

class B
{
	friend void A::attack(B& b);

private:
	int hp = 100;
};
void A::attack(B& b)
{
	cout << "b의 체력 : " << b.hp << endl;
	cout << "공격!" << endl;
	b.hp -= 10;
}
int main()
{

	return;
}
#pragma endregion

#pragma region friend class
class A
{
public:
	void printbvalue1(B& b);
	void printbvalue2(B& b);
};
class B
{
	friend class A;

	int value = 10;
	int value = 20;
};

void A::printbvalue1(B& b)
{
	cout << b.value << endl;
}

void A::printbvalue2(B& b)
{

}
int main()
{


	return;
}
#pragma endregion

