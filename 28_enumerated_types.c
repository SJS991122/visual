#include <stdio.h>

void myEnum();

int main()
{
    myEnum();

    return 0;
}

void myEnum()
{
    {
    #define RED 0
    #define ORG 1
    #define YEL 2
    
        int c = 0;

        printf("숫자 입력 : ");
        scanf_s("%d", &c);

        if (c == RED)
            printf("red\n");

        if (c == ORG)
            printf("orange\n");

        if (c == YEL)
            printf("yellow\n");
    }
    {
        enum color
        {
            Red,
            Orange,
            Yellow
        };

        int c = 0;

        printf("숫자 입력 : ");
        scanf_s("%d", &c);

        if (c == Red)
            printf("red\n");

        if (c == Orange)
            printf("orange\n");

        if (c == Yellow)
            printf("yellow\n");

        for (c = Red; c <= Yellow; c++)
            printf("%d, ", c);
    }
}
