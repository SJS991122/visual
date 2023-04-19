#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

void string();

int my_strlen(char str[]);
void my_strcpy(char dest[], int count, char src[]);
void my_strcat(char dest[], int count, char src[]);
int my_strcmp(char str1[], char str2[]);

int main()
{
    //string();

    char str[100] = "hello C language";

    //printf("strlen : %d\n", strlen(str));
    //
    //char str1[20];
    //printf("strcpy : %s\n", strcpy(str1, str));
    //
    //str[0] = 'z';
    //printf("strcmp : %d\n", strcmp(str, str1));
    //
    //printf("strcat : %s\n", strcat(str, str1));

    //my string
    {
        //strlen
        char str[100] = "Hello";
        printf("%d\n", my_strlen(str));

        //printf("%d\n", my_strlen("Hello"));
       
        //strcpy
        char dest[9] = "";
        char src[] = "Hello";

        my_strcpy(dest, 9, src);

        printf("mystrcpy : %s\n", dest);

        //strcat
        char dest1[9] = "Cat";
        char src1[] = "Dog";

        my_strcat(dest1, 9, src1);
        printf("mystrcat : %s\n", dest1);

        //strcmp
        char string[2][9] = { "zello", "Hello" };

        printf("%s %s\n", string[0], string[1]);

        printf("mystrcmp : %d\n", my_strcmp(string[0], string[1]));
    }

    return 0;
}

void string()
{
    char var1 = '\0';
    char var2 = 0;
    char var3 = (char)NULL;

    char notNull = '0';

    printf("%d %d %d\n", var1, var2, var3);
    printf("%d\n", notNull);

    {
        char hello[] = { 'H', 'e', 'l', 'l', 'o' };

        for (int i = 0; i < 5; i++)
            printf("%c", hello[i]);

        printf("\n%s\n", hello);

        hello[4] = '\0';
        printf("\n%s\n", hello);

    }
    {
        char hello[] = "Hello";
        printf("\n%s\n", hello);
    }
}

int my_strlen(char str[])
{
    int count = 0;

    while (str[count] != '\0')
        count++;
    
    return count;
}

void my_strcpy(char dest[], int count, char src[])
{
    int srcLength = my_strlen(src);

    if (srcLength < count)
        for (int i = 0; i <= srcLength; i++)
            dest[i] = src[i];
}

void my_strcat(char dest[], int count, char src[])
{
    int destLength = my_strlen(dest);
    int srcLength = my_strlen(src);

    if (destLength + srcLength < count)
        for (int i = 0; i <= srcLength; i++)
            dest[destLength + i] = src[i];
}

int my_strcmp(char str1[], char str2[]) 
{
    for (int i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str1[i] > str2[i]) return +1; 
        else if (str1[i] < str2[i]) return -1;
        //else return 0;
    }
    return 0;
}
