#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    ����
    - rand()
*/

int main()
{
    printf("%d, ", rand() % 10 + 1); // 1 ~ 10
    printf("%d, ", rand() % 10 + 1);
    printf("%d, ", rand() % 10 + 1);
    printf("%d, ", rand() % 10 + 1);
    printf("%d, ", rand() % 10 + 1);
    printf("\n\n");

    //srand()

    srand((unsigned int)time(NULL));

    printf("%d, ", rand() % 10 + 1); // 1 ~ 10
    printf("%d, ", rand() % 10 + 1);
    printf("%d, ", rand() % 10 + 1);
    printf("%d, ", rand() % 10 + 1);
    printf("%d, ", rand() % 10 + 1);
    printf("\n\n");

    return 0;
}

/*
    ����

    ����, ����, �� ���� �����
    ���� �������� ���� ���� ���� ��
    �̰����, ������, ������ ���

    Up&Down Game (1 ~ 100) 
    - 10�� ���� ���� ������

*/