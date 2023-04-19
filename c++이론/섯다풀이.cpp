#include<iostream>

using namespace std;
/*
	38
	13 18
	¶¯
	¾Ë¸®
	µ¶»ç
	±¸»æ
	Àå»æ
	Àå»ç
	¼¼·ú
	°©¿À

*/
enum JOKBO
{
	KK_0,
	KK_9 = 9,
	SR,
	DD_1,
};
struct Hwatoo
{
	int month;
	string shape;
};
struct player
{
	string name;
	int money;
	int jokbo;
	Hwatoo card[2];
};
void Swap(Hwatoo* deck, int sour, int dest)
{
	Hwatoo temp = deck[sour];
	deck[sour] = deck[dest];

}
void MakeJokbo(int playernum, player* players)
{
	for (int i = 0; i < playernum; i++)
	{
		if (players[i].card[0].month == players[i].card[1].month)
		{
			players[i].jokbo = players[i].card[0].month + (DD_1 - 1);
		}
	}
}
void Shuffle(Hwatoo* deck)
{
	for (int i = 0; i < 1000; i++)
	{
		int sout = rand() % 20;
		int dest = rand() % 20;

	}
}
int main()
{

	return;
}