#include <stdio.h>
#include <math.h>
#include <Windows.h>
#include <stdlib.h>
#include <time.h>

#define NUM 2

struct Human
{
    char name[256];
    char gender[256];
    int age;
    float height;
};

//struct Human h;
Human h;

typedef int my_int;
my_int mi; // == int mi;

typedef struct _Monster
{
    char name[256];
    int hp;
    int atk;
    int exp;
}Monster;

Monster m1;

typedef struct
{
    char name[256];
    int hp;
    int atk;
    int exp;
    int gold;
}Player;

Player p1;

Player p2 = { "주인공", 500, 100, 10, 100 };

typedef struct
{
    int xpos;
    int ypos;
}Point;

void input_human();
void rpg();

int main()
{
    //Point pos;
    //pos.xpos = 20;
    //pos.ypos = 30;

    //printf("%d\n", pos.xpos);
    //printf("%d\n", pos.ypos);
    {
        //Point pos1, pos2;
        //double distance;

        //printf("Point pos1 : ");
        //scanf_s("%d %d", &pos1.xpos, &pos1.ypos);

        //printf("Point pos2 : ");
        //scanf_s("%d %d", &pos2.xpos, &pos2.ypos);

        //distance = sqrt((double)pow((pos1.xpos - pos2.xpos), 2) +
        //                        pow((pos1.ypos - pos2.ypos), 2));

        //printf("두 점 사이의 거리는 %g 입니다.\n\n", distance);
    }

    //input_human();
    rpg();

    return 0;
}

void input_human()
{
    struct Human hu[NUM];

    printf("%d명의 입력 받기", NUM);

    for (int i = 0; i < NUM; i++)
    {
        printf("이름 입력 => ");
        scanf_s("%s", &hu[i].name, sizeof(hu->name));

        printf("성별 입력 => ");
        scanf_s("%s", &hu[i].gender, sizeof(hu->gender));

        printf("나이 입력 => ");
        scanf_s("%d", &hu[i].age);

        printf("키 입력 = > ");
        scanf_s("%f", &hu[i].height);

        printf("\n");
    }

    for (int i = 0; i < NUM; i++)
    {
        printf("이름 : %s, 성별 : %s, 나이 : %d, 키 : %.2f\n",
            hu[i].name, hu[i].gender, hu[i].age, hu[i].height);
    }
    printf("\n");
}

void rpg()
{
    Player p;

    Monster m[2] = {
        {"리본돼지", 100, 100, 50},
        {"슬라임", 60, 20, 70}
    };

    printf("이름 : ");
    scanf_s("%s", &p.name, sizeof(p.name));

    printf("hp : ");
    scanf_s("%d", &p.hp);

    printf("atk : ");
    scanf_s("%d", &p.atk);

    p.exp = 0;
    p.gold = 0;

    printf("게임 시작!!!\n\n");

    srand((unsigned int)time(NULL));

    while (1)
    {
        if (p.hp <= 0)
        {
            printf("게임 오버\n");
            exit(0);
        }
        printf("\n한 층 내려갑니다.\n");
        Sleep(1000);

        int event = rand() % 3;

        switch (event)
        {
        case 0:
            printf("보물 상자 발견!\n");

            p.gold += 100;

            printf("현재 소지금 : %d\n", p.gold);

            printf("\n한 층 내려갑니다.\n");
            Sleep(1000);

            system("cls");
            break;

        case 1:
            printf("힐팩 발견!\n");

            p.hp += 100;

            printf("현재 체력 : %d\n", p.hp);

            printf("\n한 층 내려갑니다.\n");
            Sleep(1000);

            system("cls");
            break;

        case 2:
            int m_num = rand() % 2;
            int m_hp = m[m_num].hp;

            printf("%s를 만났습니다!!!\n", m[m_num].name);

            while (1)
            {
                printf("플레이어의 공격\n");
                printf("%d의 데미지\n", p.atk);

                Sleep(1000);
                printf("%s의 체력 %d => %d\n", m[m_num].name, m_hp, m_hp - p.atk);

                m_hp -= p.atk;

                if (m_hp <= 0)
                {
                    p.exp += m[m_num].exp;
                    printf("경험치 : %d\n", p.exp);
                    
                    printf("\n한 층 내려갑니다.\n");
                    Sleep(1000);
                    break;
                }

                printf("%s의 공격\n", m[m_num].name);
                printf("%d의 피해!\n", m[m_num].atk);

                Sleep(1000);
                printf("%s의 체력 %d => %d\n", p.name, p.hp, p.hp - m[m_num].atk);

                p.hp -= m[m_num].atk;

                if (p.hp <= 0)
                {
                    printf("\n패배\n");
                    Sleep(1000);
                    break;
                }
            }
            system("cls");

            break;
        }
    }

}

