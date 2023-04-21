#include<iostream>

using namespace std;
class Data
{
public:
	Data(int aData, int bData, int cData)
		:a(aData),b(bData),c(cData)
	{
		/*a = adata;
		b = bdata;
		c = cdata;*/
	}
	void print()
	{
		cout << a << endl;
		cout << b << endl;
		cout << c << endl;

	}
private:
	const int a, b, c;
};
int main()
{
	Data data1(20, 20, 20);
	Data print();
	return;
}