#define _CRT_SECURE_NO_WARNINGS
//#pragma warning(disable:4996)
#include <stdio.h>
#include <stdlib.h>

/*
    for(�ʱ��; ���ǽ�; ������(����))
    {
        ��ɹ�;
    }
*/

int main()
{
    for (int i = 0; i < 5; i++)
    {
        printf("for�� ��ɾ� %d�� �ݺ���\n", i);
    }

    printf("\n");

    //bool => false : 0 true : 1
    for (int i = 4; i >= 0; i--) //5 4 3 2 1 0
    {
        printf("for�� ��ɾ� %d�� �ݺ���\n", i);
    }

    //for (;;)
    //{
    //    printf("���ѷ���\n");
    //}

    printf("\n");



    //char num1, num2;
    //for (; int count = scanf("%c %c", &num1, &num2);)
    //{
    //    printf("%d\n", count);
    //    while (getchar() != '\n');
    //}

    for (int i = 0, j = 0; i < 10 && j < 10; i++, j += 2)
    {
        printf("%d ", i);
        printf("%d\n", j);
    }

    printf("\n");

    for (int i = 1; i <= 10; i++)
    {
        if (i % 3 == 0)
            continue;

        printf("%d ", i);
    }

    printf("\n");

    for (int c = 'A'; c <= 'Z'; c++)
        printf("%c ", c);

    printf("\n");

    for (int c = 'Z'; c >= 'A'; c--)
        printf("%c ", c);

    printf("\n");

    int total = 0;
    int num = 0;

    printf("0���� num������ ���� ���ϱ�. num : ");
    scanf_s("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        total += i;
    }
    printf("0���� %d������ ���� = %d\n", num, total);

    printf("\n");

    /*
        ��ø for ��
    */
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*"); 
        }
        printf("\n");
    }
    
    for (int i = 2; i < 10; i++)
    {
        printf("***������ %d�� ����!***\n", i);

        for (int j = 1; j < 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }

        printf("***������ %d�� ��!***\n", i);
    }

    /*
          *
         ***
        *****
         ***
          * 
   
        ���� 1�� ����
        ���� 2�� - 1

    */

    int number;
    printf("���̾Ƹ�� ũ�� �Է� : ");
    scanf_s("%d", &number);

    for (int i = 0; i < (number / 2 + 1) ; i++)
    {
        for (int j = i; j < (number / 2 + 1); j++)
        {
            printf(" ");
        }
        for (int k = 0; k < (i * 2 + 1); k++) //(0 * 0, 1 * 2, 2 * 3)
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = (number / 2 + 1) - 1; i > 0; i--)
    {
        for (int j = i; j <= (number / 2 + 1); j++)
        {
            printf(" ");
        }
        for (int k = 0; k < ((i - 1) * 2) + 1; k++)
        {
            printf("*");
        }

        printf("\n");
    }

    //abs
    printf(" 1 : %d\n", abs( 1));
    printf("-1 : %d\n", abs(-1));


    return 0;
}

/*
    *
    **
    ***
    ****
    *****
     
    *****
    ****
    ***
    **
    * 
    
    *****
    0****
    00***
    000**
    0000*
        
        *
       **
      ***
     ****
    *****
        
      *
     ***
    *****
     ***
      *
 */