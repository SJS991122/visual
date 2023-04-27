/*
	°´Ã¼ÁöÇâ 4´ëÆ¯Â¡
	-Ä¸½¶È­(Á¤º¸Àº´Ğ)
	-Ãß»óÈ­(abstraction)
	-»ó¼Ó(inheritance) == Àç»ç¿ë°ú È®»ê
	-´ÙÇü¼º(polymorphism)
		¤±¿À¹ö·Îµù == °°ÀºÀÌ¸§À¸·Î ¼öÇà½ÃÅ°´Â°Í
	    ¤±¿À¹ö¶óÀÌµù ==

	°´Ã¼ÁöÇâ ¼³°è¿øÄ¢(solid)
	- ´ÜÀÏ Ã¥ÀÓ ¿øÄ¢(single responsibility principle)
	-°³¹æ,Æó¼â ¿øÄ¢(open closed principle)
	-¸®½ºÄÚÇÁ Ä¡È¯ ¿ø®g(liskov substitution principle)
	-ÀÎÅÍÆäÀÌ½º ºĞ¸® ¿øÄ¢(interface segregation principle)
	-ÀÇÁ¸ ¿ªÀü ¿øÄ¢(dependency inversion principle)
*/

/*
	µğÀÚÀÎ ÆĞÅÏ == ÀÌ¹Ì¸¸µé¾îÁø ÄÚµå¸¦ °¡Á®´Ù°¡ »ç¿ëÇÑ´Ù

	-½Ì±ÛÅæ ÆĞÅÏ
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
		cout << "¼Ò¸® Ãâ·Â : " << music << endl;
	}

private:
	Audio() {}
	Audio(const Audio& audio) = delete;
	Audio& operator=(const Audio& audio) = delete;
};

int main()
{
	//Audio a;

	string bgm("´øÀü");
	Audio::Getinstance().OutSound(bgm);

	return;
}