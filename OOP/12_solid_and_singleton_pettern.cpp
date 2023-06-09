/*
	객체지향 4대특징
	-캡슐화(정보은닉)
	-추상화(abstraction)
	-상속(inheritance) == 재사용과 확산
	-다형성(polymorphism)
		ㅁ오버로딩 == 같은이름으로 수행시키는것
	    ㅁ오버라이딩 ==

	객체지향 설계원칙(solid)
	- 단일 책임 원칙(single responsibility principle)
	-개방,폐쇄 원칙(open closed principle)
	-리스코프 치환 원췩(liskov substitution principle)
	-인터페이스 분리 원칙(interface segregation principle)
	-의존 역전 원칙(dependency inversion principle)
*/

/*
	디자인 패턴 == 이미만들어진 코드를 가져다가 사용한다

	-싱글톤 패턴
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
		cout << "소리 출력 : " << music << endl;
	}

private:
	Audio() {}
	Audio(const Audio& audio) = delete;
	Audio& operator=(const Audio& audio) = delete;
};

int main()
{
	//Audio a;

	string bgm("던전");
	Audio::Getinstance().OutSound(bgm);

	return;
}