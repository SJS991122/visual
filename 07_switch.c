#include <stdio.h>

//��ũ�� ���
#define Game 1
#define GameMenual 2
#define Option 3
#define Exit 4

/*
    switch(����)
    {
    case �� :
        ���;
        break;
    case ��2 :
        ���;
        break;
    default:
        ���ܸ��ó��
        break;
    }
*/

int main()
{
    /*int selmenu;
    printf("�޴��� �����ϼ��� [1. ���� ����, 2. ���� ����, 3. ����, 4. ����]");
    printf("\n�Է� : ");
    scanf_s("%d", &selmenu);

    switch (selmenu)
    {
    case Game:
        printf("\n������ �����մϴ�\n");
        break;
    case GameMenual:
        printf("���� ����\n");
        break;
    case Option:
        printf("���� ����\n");
        break;
    case Exit:
        printf("���� ����\n");
        break;
    default:
        printf("�߸� �Է��ϼ̽��ϴ�\n");
        break;
    }*/


    int time = 0;
    int number = 0;

    printf("�ð��� �Է����ּ��� : ");
    scanf_s("%d", &time);

    if (time < 12)
    {
        number = 1;
    }
    else if (time > 12)
    {
        number = 2;
    }
    else if (time == 12)
    {
        number = 3;
    }
    else
    {
        printf("�߸� �Է��Ͽ����ϴ�\n");
    }

    switch (number)
    {
    case 1:
        printf("����\n");
        break;
    case 2:
        printf("����\n");
        break;
    case 3:
        printf("����\n");
    default:
        break;
    }
     

    return 0;
}