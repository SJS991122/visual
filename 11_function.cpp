#include "11_function.h"

//��������x, ��ȯ��o
int getInt()
{
    printf("���ڸ� �Է����ּ��� : ");
    
    int n;
    scanf_s("%d", &n);

    return n;
}

//��������, ��ȯ�� ��� �ִ� ���
int add(int x, int y)
{
    //int result = x + y;
    //return result;

    return x + y;
}

//��������o, ��ȯ��x
void ShowNumber(int num)
{
    printf("���� ���� : %d\n", num);
}

//���� ���ڿ� ��ȯ ���� ��� ���� ���
void test() //function prototype
{
    printf("111111111111111111");

    return;

    printf("222222222222222222");
}


int main(void)
{
    int x1 = 0;
    int y1 = 0;

    //printf("���ڸ� �Է����ּ��� : ");
    //scanf_s("%d", &x1);

    //printf("���ڸ� �Է����ּ��� : ");
    //scanf_s("%d", &y1);

    x1 = getInt();
    y1 = getInt();

    printf("%d + %d = %d\n", x1, y1, add(x1, y1));

    int num = getInt();
    ShowNumber(num);

    test();

    printf("�� �� �� ū ����? %d\n", Compare(x1, y1));

    return 0;
}

int Compare(int num1, int num2)
{
    if (num1 > num2)
        return num1;
    else
        return num2;
}
