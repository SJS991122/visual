#include<iostream>

using namespace std;

class Data
{
	int value1;
	mutable int value2;

public:

	Data() : value1(0){}
	int& GetValue() { cout << "not const" << endl; return value1; }

	//int& GetValue() const { cout << "const" << endl; return value1; }

	const int& GetValue1() const { cout << "const" << endl; return value1; }

	//void Setvalue(int value) const { this->value1 = value; }
	void Setvalue(int value) const { this->value2 = value; }
	const int& Setvalue2(int value) const { this->value2 = value; }


};
void Print(const Data& data)
{
	data.GetValue1();
}
int main()
{
	Data data1;
	const Data data2;
	
	data1.GetValue();
	//data2.GetValue();
	data2.GetValue1();

	Print(data2);

	return;
}