#include<iostream>
//
using namespace std;

class student
{
public:
	student(const int& id, const string& name)
		: id(id), name(name)
	{}
	student(const string& name)
		:student(0, name)
	{}
private:
	int id;
	string name;
};

class student2
{
public:
	student2(const int& id, const string& name)
	{
		initialize(id, name);
	}
	student2(const string& name)
	{
		initialize(0, name);
	}
	void initialize(const int& id, const string& name)
	{
		//TODO : 나중에 초기화 해주기
	}

private:
	int id;
	string name;
};

int main()
{

	return;
}