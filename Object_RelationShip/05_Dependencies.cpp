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
	은행 계좌 시스템 만들기

	1. 계좌 개설
	2. 입금
	3. 출금
	4. 계좌정보 전체 출력
*/