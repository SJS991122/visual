#include <stdio.h>
//stderr

int main()
{
    char word[100];
    char word1[100];

    //scanf("%s", word);
    scanf_s("%s", word, sizeof(word));

    printf("%s\n", word); // _world

    while (getchar() != '\n');

    gets(word1);
    printf("%s\n", word1);

    return 0;
}