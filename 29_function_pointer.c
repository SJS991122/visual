#include <stdio.h>

void pointer_and_function();
void mini_RPG2();

int main()
{
    //pointer_and_function();
    mini_RPG2();

    return 0;
}

int Add(int x, int y) { return x + y; }
int Sub(int x, int y) { return x - y; }

typedef struct _player
{
    char name[256];
    char location[256];
    int hp;
    void (*ifDead[5])(struct _player*);
}player;

void printDead(player* p)
{
    printf("%s ���\n", p->name);

    return;
}

void revive(player* p)
{
    printf("%s �һ�\n", p->name);
    p->hp = 200;

    return;
}

void moveToTown(player* p)
{
    printf("%s ������ �̵�\n", p->name);
    strcpy(p->location, "Town");

    return;
}

void pointer_and_function()
{
    char op = '\0';
    printf("������ �Է� : ");
    scanf_s(" %c", &op, (int)sizeof(op));

    int x = 0;
    printf("�ǿ����� �Է� : ");
    scanf_s("%d", &x);

    int y = 0;
    printf("�ǿ����� �Է� : ");
    scanf_s("%d", &y);

    int(*compute)(int, int) = NULL;

    switch (op)
    {
    case'+': compute = Add; break;
    case'-': compute = Sub; break;
    }

    if (compute != NULL)
        printf("��� : %d\n", compute(x, y));

    printf("\n\n");
}

void mini_RPG2()
{
    player p =
    {
        "Wizard",
        "Dungeon",
        100,
        {NULL, NULL, NULL}
    };

    p.ifDead[0] = printDead;
    p.ifDead[1] = revive;
    p.ifDead[2] = moveToTown;

    printf("%s�� ��ġ : %s, HP : %d\n", p.name, p.location, p.hp);

    int damage = 0;

    while (1)
    {
        printf("���� ���� �Է�(���� ü�� : %d)", p.hp);
        scanf_s("%d", &damage);

        p.hp -= damage;

        if (p.hp <= 0)
        {
            for (int i = 0; i < 3; i++)
            {
                if (p.ifDead[i] != NULL)
                    p.ifDead[i](&p);
            }
            break;
        }
    }
    printf("%s�� ��ġ : %s, HP : %d\n", p.name, p.location, p.hp);
}
