#include <stdio.h>

#define ROWS 5
#define COLS 3

//切戟莫[楳][伸];

/*
   int arr[3];
   けけし
    => arr[2]
   
    int arr[3][5]

    けけけけけ
    けけけけけ
    けけけしけ
    => 2楳 3伸稽 羨悦
*/

int arrOne[10];
int arrTwo[5][5];
float arrThree[3][3][3];

//initialize
int arr1[2][3] = { 1, 2, 3, 4, 5, 6 };
int arr2[2][3] = { {1, 2, 3}, {4, 5, 6} };
//123
//456
int arr3[2][3] = { 1, 2, 3 };
int arr4[][3] = { 1, 2, 3 };
int arr5[][3] = { {1, 2}, {3, 4, 5}, {6} };
//int arr6[2][] = { 1, 2, 3, 4, 5, 6 };

void printArr();
void Score();
void floor();
void board();

int main()
{
    //printArr();

    Score();

    floor();

    board();

    int arr7[4][2];

    printf("壕伸税 穿端 郊戚闘 滴奄 : %d\n", sizeof(arr7));
    printf("壕伸税 1楳 郊戚闘 滴奄 : %d\n", sizeof(arr7[0]));

    printf("壕伸税 据社税 鯵呪 : %d\n", sizeof(arr7) / sizeof(int));
    printf("壕伸税 楳税 鯵呪 : %d\n", sizeof(arr7) / sizeof(arr7[0]));
    printf("壕伸税 伸税 鯵呪 : %d\n", sizeof(arr7[0]) / sizeof(arr7[0][0]));


    return 0;
}

#pragma region print_array
void printArr()
{
    //arr1
    printf("*** arr1 **\n");
    for(int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr1[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //arr2
    printf("*** arr2 **\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr2[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //arr3
    printf("*** arr3 **\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr3[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //arr4
    printf("*** arr4 **\n");
    for (int i = 0; i < 1; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr4[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    //arr5
    printf("*** arr5 **\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", arr5[i][j]);
        }
        printf("\n");
    }

    printf("\n");
}
#pragma endregion

void Score()
{
    int score[ROWS][COLS] = { {85, 60, 70}, {90, 100, 80}, 
        {50, 60, 70}, {70, 50, 68}, {40, 90, 100} };
    int totalKor = 0, totalEng = 0, totalMath = 0;
    int koravg = 0, engavg = 0, mathavg = 0;

    for (int i = 0; i < ROWS; i++)
    {
        totalKor += score[i][0];
        totalEng += score[i][1];
        totalMath += score[i][2];
    }
    printf("\n厩嬢恥繊\t慎嬢恥繊\t呪俳恥繊\t\n");
    printf("%d\t\t%d\t\t%d\t\n", totalKor, totalEng, totalMath);

    koravg = totalKor / ROWS;
    engavg = totalEng / ROWS;
    mathavg = totalMath / ROWS;

    printf("\n厩嬢汝液\t慎嬢汝液\t呪俳汝液\t\n");
    printf("%d\t\t%d\t\t%d\t\n", koravg, engavg, mathavg);

    int student[5] = { 0 };

    for (int i = 0; i < ROWS; i++)
    {
        for (int j = 0; j < COLS; j++)
        {
            student[i] += score[i][j];
        }

        printf("%d腰属 俳持税 恥繊 : %d\n", i + 1, student[i]);
    }
    printf("\n");
}

void floor()
{
    int floor[3][3];
    int floor1[3] = { 0 };
    int total = 0;

    for (int i = 0; i < 3; i++)
    {
        printf("*** %d寵 ***\n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("%d寵 %d硲 昔姥呪 : ", i + 1, j + 1);
            scanf_s("%d", &floor[i][j]);
        }
        for (int j = 0; j < 3; j++)
        {
            floor1[i] += floor[i][j];
        }
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        printf("%d寵 昔姥呪 : %d誤", i + 1, floor1[i]);
    }

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        total += floor1[i];
    }
    printf("恥 昔姥呪 %d\n", total);
}

void board()
{
    int board[5][5];

    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            board[x][y] = y * 5 + x; //0 5 10 15 20 
                                     //1 6 11 16 21
        }
    }
    
    for (int y = 0; y < 5; y++)
    {
        for (int x = 0; x < 5; x++)
        {
            printf("%d\t", board[x][y]);
        }
        printf("\n");
    }

    printf("\n");

    for (int x = 0; x < 5; x++)
    {
        for (int y = 0; y < 5; y++)
        {
            printf("%d\t", board[x][y]);
        }
        printf("\n");
    }
}

/*
    1. 収切 醤姥 惟績 = 10腰 照拭 限備奄
    
    1 2 3
    1 3 5  1 strike 1 ball
    
    2. 杉害四 惟績

    50000 1000戚雌 隔嬢醤敗
    52 => 1 ~ 13 4舌梢

    1 10 ?
*/
