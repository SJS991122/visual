#include <stdio.h>
#include <conio.h>

/*
    while(���ǽ�)
    {
        ��ɹ�;
    }
*/

int main()
{
    //while
    //bool study = true;

    //while (study)
    //{
    //    printf("Hello World\n");

    //    printf("���� ���ΰ���? [�� : 1, �ƴϿ� : 0] -> ");
    //    int answer = -1;
    //    scanf_s("%d", &answer);

    //    if (answer == 0)
    //    {
    //        study = false;
    //        //break;
    //    }
    //}

    //char key;

    //while (true)
    //{
    //    printf("�̵�Ű �Է� : ");
    //    key = _getch();

    //    if (key == 'q')
    //        break;

    //    switch (key)
    //    {
    //    case 'w': printf("��\n"); break;
    //    case 's': printf("��\n"); break;
    //    case 'a': printf("��\n"); break;
    //    case 'd': printf("��\n"); break;
    //    default: printf("�߸�����\n"); break;
    //    }
    //}

    //do while
    /*
        do
        {
            ��ɹ�;
        }while(���ǽ�)
    */

    const int secretCode = 123123;

    int password = 0;
    int tryCount = 0;

    do
    {
        if (tryCount >= 3)
        {
            printf("3ȸ ���� ���� ���!\n");
            break;
        }

        printf("��й�ȣ �Է� (3ȸ ���� �� ���, ���� ���� Ƚ�� : %d) => ", tryCount);
        scanf_s("%d", &password);

        tryCount++;
    } while (password != secretCode);


    return 0;
}

