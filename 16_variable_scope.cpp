#include <stdio.h>

/*
    지역(local)변수
    전역(global)변수
*/

//전역변수
int global;

char var1 = 'G';

void LocalCount();
void StaticCount();

int main()
{
    printf("초기화 하지 않은 global 값 : %d\n", global);


    printf("main에서의 var1 : %c\n", var1);
    //지역 변수
    {
        char var1 = 'L';
        printf("{}에서의 var1 : %c\n", var1);
    }

    printf("main에서의 var1 : %c\n", var1);

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
