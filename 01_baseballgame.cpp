#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void RandomNum(int baseBall[]);
void BaseballGame(int baseBall[], int UserNum[]);
void PrintNum(int baseBall[]);

int main()
{
    int baseball[3]; 
    int usernum[3];

    RandomNum(baseball);
    BaseballGame(baseball, usernum);
    PrintNum(baseball);

    return 0;
}

void RandomNum(int baseBall[])
{
    srand((unsigned int)time(NULL));

    for (int i = 0; i < 3; i++)
    {
        baseBall[i] = rand() % 9 + 1;

        for (int j = 0; j < i; j++)
        {
            if (baseBall[i] == baseBall[j])
                i--;
        }
    }
}

void BaseballGame(int baseBall[], int UserNum[])
{
    int chance = 0;

    while (chance != 10)
    {
        chance++;

        int strike = 0;
        int ball = 0;

        printf("���ڸ� �Է� �Ͻÿ� : ");

        for(int i = 0; i < 3; i++)
        {
            scanf_s("%d", &UserNum[i]);
        }

        for (int i = 0; i < 3; i++)
        {
            if (baseBall[i] == UserNum[i])
                strike++;
            for (int j = 0; j < 3; j++)
            {
                if (baseBall[i] == UserNum[j])
                    ball++;
            }
        }

        ball -= strike;

        printf("%d strike %d ball", strike, ball);

        if (strike == 3)
        {
            printf("�̰���ϴ�!!\n");
            exit(0); //return;
        }
    }
}

void PrintNum(int baseBall[])
{
    printf("����!! ��ǻ���� ���ڴ� : ");

    for (int i = 0; i < 3; i++)
        printf("%d", baseBall[i]);
}
