/*
	STL : Standard Template Library

	-�����̳�(container)
	-�ݺ���(iterator)�����Ϳ� ����� ���� ���Ҹ� ����Ű�� �����Ͽ� ���� ���Ҹ� ����Ų��
	-�˰���(algorithm) ���� ���� �˻��� �ذ��ϴ� ������� ����
	-�Լ���(functor)��ü�� �Լ�ó�� �Ҽ��ִ°�
*/
#include<iostream>
#include<vector>
#include<deque>
#include <list>
#include<set>
#include <map>
#include <stack>

using namespace std;
/*
	Container
	-sequence, associative, adapter
*/
void SequenceContainer();
void AssociativeConainer();
void AdapterContainer();
int main()
{
	SequenceContainer();
	AssociativeConainer();

	return;
}
/*
	SequenceContainer
	-�����͸� '����'���� �����ϴ� �����̳�
*/
void SequenceContainer()
{
	/*
		Vector ����ó���� �ʿ��Ҷ� ���
	*/
	{
		cout << "Vector" << endl;
		vector<int> vec;

		for (int i = 0; i < 10; i++)
			vec.push_back(i);

		for (const auto& ele : vec)
			cout << ele << ' ';
		cout << endl << endl;
	}
	//Deque - ���������� ����Ұ� ���������� �̾���δ� ���Ҵ��Ҷ� ���������� ������ �̾���δ�
	{
		cout << "Deque" << endl;

		deque<int> deq;

		for (int i = 0; i < 10; i++)
		{
			deq.push_back(i);
			deq.emplace_front(i);
		}

		for (const auto& ele : deq)
			cout << ele << ' ';
		cout << endl << endl;
	}

	//List - �տ����� ���ҿ� �ڿ� ���� ���Ҹ� ����Ų�� ���θ� ����Ų�� 
	{
		cout << "List" << endl;

		list<int> list;
		for (int i = 0; i < 10; i++)
			list.push_back(i);

		for (const auto& ele : list)
			cout << ele << ' ';
		cout << endl << endl;
	}
}

void AssociativeConainer()
{
	/*
		set / multiset
	*/
	{
		cout << "Set" << endl;
		
		set<string> strset1;

		strset1.insert("Hello");
		strset1.insert("World");
		strset1.insert("Hello");

		cout << strset1.size() << endl;

		for (const auto& ele : strset1)
			cout << ele << ' ';
		cout << endl << endl;
	}
	{
		cout << "Set" << endl;

		set<string> strset2;

		strset2.insert("Hello");
		strset2.insert("World");
		strset2.insert("Hello");

		cout << strset2.size() << endl;

		for (const auto& ele : strset2)
			cout << ele << ' ';
		cout << endl << endl;
	}
	/*
		map / multimap
	*/
	{
		cout << "map" << endl;

		map<char, int> map;
		map['c'] = 50;//mapping
		map['a'] = 50;
		map['d'] = 50;
		map['b'] = 50;

		cout << map['a'] << endl;

		map['a'] = 100;
		cout << map['a'] << endl;

		for (const auto& ele : map)
			cout << ele.first << ' ' << ele.second << ' ';
		cout << endl << endl;
	}
	{
		cout << "multimap" << endl;
		multimap<char, int>multimap;
		multimap.insert(pair<char, int>('a', 10));
		multimap.insert(pair<char, int>('b', 100));
		multimap.insert(pair('b', 100));//17�����̻����

		multimap.insert(make_pair('a', 10000));

		cout << multimap.count('a') << endl;

		for (const auto& ele : multimap)
			cout << ele.first << ' ' << ele.second << ' ';
		cout << endl << endl;

		char answer;
		cin >> answer;
		multimap.find(answer)->second;
		//multimap.empty();

		for (const auto& ele : multimap)
			cout << ele.first << ' ' << ele.second << ' ';
		cout << endl << endl;
	}
}
/*
	AdepterContainer

*/
void AdapterContainer()
{
	/*
		Stack
		-LIFO
	*/
	{
		cout << "Stack" << endl;

		stack<int>stack;

		stack.push(1);//push
		stack.emplace(1);
		stack.emplace(3);
	}
}

/*
	���� - ���� �Է��� �ܾ� ������ ������ ���� �� m,n�����
	�ܾ� ���� m�� �°� �ܾ �Է�.
	���� ������ n�� ���� ������ ���� ��
	�ܾ �Է��ϸ� ���ڰ� ���
	���ڸ� �Է��ϸ� �ܾ ���
	��Ʈ
	|
	|
	v
	stoi=>string to int
	string str1="123";
	string str2="456";

	cout<<str1+str2;

	int i1=stoi(str1);
	int i2=stoi(str2);

	cout<<i1+i2<<endl;

*/

/*
	associative container
	-Ű(key), ��()
*/