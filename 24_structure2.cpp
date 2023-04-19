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

Player p2 = { "���ΰ�", 500, 100, 10, 100 };

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

        //printf("�� �� ������ �Ÿ��� %g �Դϴ�.\n\n", distance);
    }

    //input_human();
    rpg();

    return 0;
}

void input_human()
{
    struct Human hu[NUM];

    printf("%d���� �Է� �ޱ�", NUM);

    for (int i = 0; i < NUM; i++)
    {
        printf("�̸� �Է� => ");
        scanf_s("%s", &hu[i].name, sizeof(hu->name));

        printf("���� �Է� => ");
        scanf_s("%s", &hu[i].gender, sizeof(hu->gender));

        printf("���� �Է� => ");
        scanf_s("%d", &hu[i].age);

        printf("Ű �Է� = > ");
        scanf_s("%f", &hu[i].height);

        printf("\n");
    }

    for (int i = 0; i < NUM; i++)
    {
        printf("�̸� : %s, ���� : %s, ���� : %d, Ű : %.2f\n",
            hu[i].name, hu[i].gender, hu[i].age, hu[i].height);
    }
    printf("\n");
}

void rpg()
{
    Player p;

    Monster m[2] = {
        {"��������", 100, 100, 50},
        {"������", 60, 20, 70}
    };

    printf("�̸� : ");
    scanf_s("%s", &p.name, sizeof(p.name));

    printf("hp : ");
    scanf_s("%d", &p.hp);

    printf("atk : ");
    scanf_s("%d", &p.atk);

    p.exp = 0;
    p.gold = 0;

    printf("���� ����!!!\n\n");

    srand((unsigned int)time(NULL));

    while (1)
    {
        if (p.hp <= 0)
        {
            printf("���� ����\n");
            exit(0);
        }
        printf("\n�� �� �������ϴ�.\n");
        Sleep(1000);

        int event = rand() % 3;

        switch (event)
        {
        case 0:
            printf("���� ���� �߰�!\n");

            p.gold += 100;

            printf("���� ������ : %d\n", p.gold);

            printf("\n�� �� �������ϴ�.\n");
            Sleep(1000);

            system("cls");
            break;

        case 1:
            printf("���� �߰�!\n");

            p.hp += 100;

            printf("���� ü�� : %d\n", p.hp);

            printf("\n�� �� �������ϴ�.\n");
            Sleep(1000);

            system("cls");
            break;

        case 2:
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
            system("cls");

            break;
        }
    }

}

