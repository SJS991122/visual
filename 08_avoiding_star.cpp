#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

#define WIDTH 15
#define HEIGHT 20

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

void createStar()
{
    for (int i = 0; i < WIDTH; i++)
    {
        if (star[i].isStar == false)
        {
            star[i].x = rand() % WIDTH;
            star[i].y = 0;
            star[i].isStar = true;
            return;
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

int score = 0;

void destroyStar()
{
    for (int i = 0; i < WIDTH; i++)
    {
        if (star[i].isStar && star[i].y > HEIGHT)
        {
            star[i].isStar = false;
            score += 100;
            printf("점수 : %d\n", score);
        }
    }
}

bool collidPlayer()
{
    for (int i = 0; i < WIDTH; i++)
    {
        if(star[i].isStar && star[i].y == player.y && star[i].x == player.x)
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
    return ((GetAsyncKeyState(key) & 0x8000) != 0);
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

    for (int i = 0; i < WIDTH + 1; i++)
    {
        gotoxy(i, 0);
        printf("■");

        for (int j = 1; j < HEIGHT + 1; j++)
        {
            gotoxy(i, j);
            if (i == 0 || i == WIDTH)
            {
                printf("■");
            }
        }
        gotoxy(i, HEIGHT + 1);
        printf("■");
    }
}

int main()
{
    init();

    srand((unsigned int)time(NULL));

    while (!(collidPlayer()))
    {
        createStar();
        shoothingStar();
        destroyStar();

        movePlayer();

        printGame();

        Sleep(30);
    }

    return 0;
}