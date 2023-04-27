/*
	��ü���� 4��Ư¡
	-ĸ��ȭ(��������)
	-�߻�ȭ(abstraction)
	-���(inheritance) == ����� Ȯ��
	-������(polymorphism)
		�������ε� == �����̸����� �����Ű�°�
	    ���������̵� ==

	��ü���� �����Ģ(solid)
	- ���� å�� ��Ģ(single responsibility principle)
	-����,��� ��Ģ(open closed principle)
	-�������� ġȯ ���g(liskov substitution principle)
	-�������̽� �и� ��Ģ(interface segregation principle)
	-���� ���� ��Ģ(dependency inversion principle)
*/

/*
	������ ���� == �̸̹������ �ڵ带 �����ٰ� ����Ѵ�

	-�̱��� ����
*/
#include<iostream>

using namespace std;

class Audio
{
public:
	static Audio& Getinstance()
	{
		static Audio audio;
		return audio;
	}

	void OutSound(string music)
	{
		cout << "�Ҹ� ��� : " << music << endl;
	}

private:
	Audio() {}
	Audio(const Audio& audio) = delete;
	Audio& operator=(const Audio& audio) = delete;
};

int main()
{
	//Audio a;

	string bgm("����");
	Audio::Getinstance().OutSound(bgm);

	return;
}