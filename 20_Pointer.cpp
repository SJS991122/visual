#include <stdio.h>

int main()
{
    int num = 7;
    //int num1 = 8;
    int* pnum;
    pnum = &num;
   // pnum = &num1;

    printf("%d\n", *pnum);
    printf("%d\n\n", num);

    *pnum = 20;

    printf("%p\n", pnum);
    printf("%d\n", *pnum);
    printf("%d\n", num);
    printf("%p\n", &num);
    printf("%d\n", (int)sizeof(pnum));


    int* ptr = NULL;

    return 0;
}