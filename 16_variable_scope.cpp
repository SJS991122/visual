#include <stdio.h>

/*
    ����(local)����
    ����(global)����
*/

//��������
int global;

char var1 = 'G';

void LocalCount();
void StaticCount();

int main()
{
    printf("�ʱ�ȭ ���� ���� global �� : %d\n", global);


    printf("main������ var1 : %c\n", var1);
    //���� ����
    {
        char var1 = 'L';
        printf("{}������ var1 : %c\n", var1);
    }

    printf("main������ var1 : %c\n", var1);

    for (int i = 0; i < 5; i++)
    {
        LocalCount();
        StaticCount();
    }

    return 0;
}

void LocalCount()
{
    int count = 1;

    printf("local count : %d\n", count);
    count++;
}

void StaticCount()
{
    static int count = 1;

    printf("static count : %d\n", count);

    count++;
}
