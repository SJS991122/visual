#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Won
{
	int value;
	int value1;
	Won(int value = 0) : value(value) {}

public:
	auto Getvalue() const { return value; }
	void Setvalue(const int& value) { this->value = value; }
	friend ostream& operator(ostream& out, const Won& won)
	{
		out << won.vlaue;
		return;
	}
	// == != < >
	bool operator==(const Won& rhs)const
	{
		return value == rhs.value && value1 == rhs.value1;
	}
	bool operator!=(const Won& rhs)const
	{
		return !(*this == rhs);
	}

	bool operator < (const Won& rhs)const
	{
		return value < rhs.value;
	}

	friend bool test(const Won& lhs, const Won& rhs);
};

bool test(const Won& lhs, const Won& rhs)
{
	int w1, w2;
}

int main()
{

	Won w1(10), w2(20);

	if (w1 == w2)
		cout << "같다" << endl;
	else if (w1 != w2)
		cout << "다르다" << endl;
	
	//vector
	std::vector<Won> wons(20);

	int i = 1;
	for (auto& won : wons)
	{
		won.Setvalue(i);
		i++;
	}

	for (const auto& won : wons)
		cout << won << "";
	cout << endl;

	random_shuffle(wons.begin(), wons.end());

	for (const auto& won : wons)
		cout << won << "";
	cout << endl;

	sort(wons.begin(), wons.end());

	for (const auto& won : wons)
		cout << won << "";
	cout << endl;

	sort(wons.begin(), wons.end(), test);

	for (const auto& won : wons)
		cout << won << "";
	cout << endl;

	//람다식 함수
	sort(wons.begin(), wons.end(), [](const Won& lhs, const Won& rhs)
		{
			return lhs.Getvalue() < rhs.Getvalue();
		}
	);
	for (const auto& won : wons)
		cout << won << "";
	cout << endl;


	return;
}