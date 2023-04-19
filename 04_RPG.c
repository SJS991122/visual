#include <stdio.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

typedef struct
{
    char name[256];
    int hp;
    int atk;
    int exp;
}Player;

typedef struct
{
    char name[256];
    int hp;
    int atk;
    int exp;
}Monster;

typedef enum
{
    blank,
    wall,
    player,
    monster
}object;

typedef enum
{
    up = 'w',
    down = 's',
    left = 'a',
    right = 'd'
}moveDir;

typedef struct
{
    int x;
    int y;
}location;

void miniRpg();

int main()
{
    miniRpg();

    return 0;
}

int map[10][10] = {
    {1,1,1,1,1,1,1,1,1,1},
    {1,2,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,0,0,0,1},
    {1,0,0,0,0,0,3,0,0,1},
    {1,0,0,0,0,0,0,0,3,1},
    {1,0,0,0,0,3,0,0,0,1},
    {1,1,1,1,1,1,1,1,1,1}
};

void drawMap()
{
    system("cls");

    for (int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            switch (map[i][j])
            {
            case blank:
                printf("  ");
                break;

            case wall:
                printf("��");
                break;

            case player:
                printf("��");
                break;

            case monster:
                printf("��");
                break;
            }
        }
        printf("\n");
    }
}

Player p = { "Jiwon",  100, 50, 0 };
Player* user = &p;

void fight(Player* user)
{
    Monster m[2] = {
        {"����1", 100, 20, 50},
        {"����2", 60, 30, 70}
    };

    static int count = 0;

    srand((unsigned int)time(NULL));

    int m_num = rand() % 2;
    int m_hp = m[m_num].hp;

    printf("%s�� �������ϴ�!!!\n", m[m_num].name);

    while (1)
    {
        printf("�÷��̾��� ����\n");
        printf("%d�� ������\n", p.atk);

        Sleep(1000);
        printf("%s�� ü�� %d => %d\n", m[m_num].name, m_hp, m_hp - p.atk);

        m_hp -= p.atk;

        if (m_hp <= 0)
        {
            p.exp += m[m_num].exp;
            printf("����ġ : %d\n", p.exp);

            printf("\n�� �� �������ϴ�.\n");
            Sleep(1000);
            break;
        }

        printf("%s�� ����\n", m[m_num].name);
        printf("%d�� ����!\n", m[m_num].atk);

        Sleep(1000);
        printf("%s�� ü�� %d => %d\n", p.name, p.hp, p.hp - m[m_num].atk);

        p.hp -= m[m_num].atk;

        if (p.hp <= 0)
        {
            printf("\n�й�\n");
            Sleep(1000);
            break;
        }
    }
}

void move(location* p, location* dir)
{
    location dest;
    dest.x = p->x + dir->x;
    dest.y = p->y + dir->y;

    object destObj = map[dest.y][dest.x];

    switch (destObj)
    {
    case blank:
    {
        map[p->y][p->x] = blank;

        p->x = dest.x;
        p->y = dest.y;

        map[p->y][p->x] = player;
        break;
    }
    case wall:
        break;

    case monster:
    {
        printf("���� �������ϴ�\n");
        Sleep(1000);

        fight(user);
        Sleep(1000);

        map[p->y][p->x] = blank;

        p->x = dest.x;
        p->y = dest.y;

        map[p->y][p->x] = player;

        break;
    }
    }
}

void miniRpg()
{
    moveDir key;

    location p;
    p.x = 1;
    p.y = 1;

    location dir;
    dir.x = 0;
    dir.y = 0;

    while (1)
    {
        drawMap();
        key = _getch();

        switch (key)
        {
        case up:
        {
            dir.x = 0;
            dir.y = -1;

            move(&p, &dir);
            break;
        }

        case down:
        {
            dir.x = 0;
            dir.y = 1;

            move(&p, &dir);
            break;
        }

        case left:
        {
            dir.x = -1;
            dir.y = 0;

            move(&p, &dir);
            break;
        }

        case right:
        {
            dir.x = 1;
            dir.y = 0;

            move(&p, &dir);
            break;
        }
        }
    }

    drawMap();
}
