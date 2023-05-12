#include<iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;

class Timer
{
	time_point<high_resolution_clock>start_time;
public:
	Timer()
	{
		start_time = high_resolution_clock::now();
	}
	void Elapsed()
	{
		auto current_time = high_resolution_clock::now();
		duration<double, std::milli>delta = current_time - start_time;

		cout << delta.count() << endl;
	}
};
class Worker
{
public:
	void DoSomething()
	{
		Timer timer;
		for (int i = 0; i < 100'000'000; i++)
			;
		timer.Elapsed();
	}

	Worker();
	~Worker();

private:

};

Worker::Worker()
{
}

Worker::~Worker()
{
}
int main()
{
	Worker w;
	w.DoSomething();

	return;
}

/*
	���� ���� �ý��� �����

	1. ���� ����
	2. �Ա�
	3. ���
	4. �������� ��ü ���
*/