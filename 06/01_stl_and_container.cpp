/*
	STL : Standard Template Library

	-컨테이너(container)
	-반복자(iterator)포인터와 비슷함 개념 원소를 가리키면 접근하여 다음 원소를 가리킨다
	-알고리즘(algorithm) 정렬 삭제 검색을 해결하는 방법들을 제시
	-함수자(functor)객체를 함수처럼 할수있는것
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
	-데이터를 '선형'으로 저장하는 컨테이너
*/
void SequenceContainer()
{
	/*
		Vector 연속처리가 필요할때 사용
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
	//Deque - 연속적으로 존재불가 물리적으로 이어붙인다 재할당할때 물리적으로 공간을 이어붙인다
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

	//List - 앞에오는 원소와 뒤에 오는 원소를 가리킨다 서로를 가리킨다 
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
		multimap.insert(pair('b', 100));//17버전이상부터

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

		stack.push(1);//push adds a copy
		stack.emplace(1);//emplace constructs a new object
		stack.emplace(3);

		cout << stack.top() << endl;
		stack.pop();
		cout << stack.top() << endl;
	}
}

/*
	과제 - 내가 입력할 단어 개수와 정답을 맞힐 수 m,n만들기
	단어 개수 m에 맞게 단어를 입력.
	정답 개수인 n에 따라 정답을 맞힐 것
	단어를 입력하면 숫자가 출력
	숫자를 입력하면 단어가 출력
	힌트
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
	-키(key), 값()
*/