#include<iostream>

using namespace std;

//+ - !

class Won
{
	int value;
public:
	Won(int value=0):value(value){}

	//!
	bool operator !() const
	{

		return(value == 0) ? true : false;
	}

	friend ostream& operator <<(ostream& out, const Won& won)
	{
		out << won.value;
		return out;
	}
};
int main()
{
	const Won w1(10);
	const Won w2(0);

	cout << !w1 << endl;//0

	cout << boolalpha;
	cout << !w2 << endl;

	return;
}

// () [] new *