#include<iostream>
#include<Windows.h>
#include<stdlib.h>
#include<time.h>

#define WIDTH 15
#define HEIGHT 20
using namespace std;
typedef struct Star
{
	int x;
	int y;
	bool isStar;
}Star;
typedef struct Player
{
	int x;
	int y;
}Player;
void gotoxy(int x, int y)
{
	COORD pos = { x * 2, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
Star star[WIDTH];
Player player;
void init()
{
	for (int i = 0; i < WIDTH; i++)
		star[i].isStar = false;
	player.x = WIDTH / 2;
	player.y = HEIGHT;
}
void craeteStar()
{
	for (int i = 0; i < WIDTH; i++)
	{
		if (star[i].isStar == false)
		{
			star[i].x = rand() % WIDTH;
			star[i].y = S;
		}
	}
}
void shoothingStar()
{
	for (int i = 0; i < WIDTH; i++)
	{
		if (star[i].isStar)
		{
			star[i].y++;
		}
	}
}
void destroyStar()
{
	for (int i = 0; i < WIDTH; i++)
	{
		if (star[i].isStar && star[i].y > HEIGHT)
		{
			star[i].isStar;
		}
	}
}
bool collidPlayer()
{
	for (int i = 0; i < WIDTH; i++)
	{
		if (star[i].isStar && star[i].y==player.y && star[i])
		{
			printf("\n\n점수 : %d\n", score);
			printf("게임 종료\n");
			return true;
		}
	}
	return false;
}
int isKeyDown(int key)
{
	return((GetAsyncKeyState(key) & 0x8000) != 0);
}
void movePlayer()
{
	if (isKeyDown(VK_LEFT))
		player.x--;
	if (isKeyDown(VK_RIGHT))
		player.x++;
	if (isKeyDown(VK_UP))
		player.y--;
	if (isKeyDown(VK_DOWN))
		player.y++;
	if (player.x < 1)
		player.x = 1;
	if (player.x > WIDTH - 1)
		player.x = WIDTH - 1;
	if (player.y < 1)
		player.y = 1;
	if (player.y > HEIGHT)
		player.y = HEIGHT;
}
void printGame()
{
	system("cls");
	for (int i = 0; i < WIDTH; i++)
	{
		if (star[i].isStar)
		{
			gotoxy(star[i].x, star[i].y);
			printf("☆");
		}
	}
	gotoxy(player.x, player.y);
	printf("△");
	for (int i = 0; i < WIDTH; i++)
	{
		gotoxy(i, 0);
		printf("■");
		for (int j = 0; j < HEIGHT; j++)
		{
			gotoxy(i, j);
			if (i == 0 || i==WIDTH)
			{

			}
		}
	}
	
}
int main()
{
	init();
	srand((unsigned int)time(NULL));
	while (!(collidPlayer()))
	{
		craeteStar();
		shoothingStar();
		destroyStar();
		movePlayer();
		printGame();
		Sleep(10);
	}



	return;
}