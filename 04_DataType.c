#include <stdio.h>
#include <stdbool.h>

/*
    Data Type(�ڷ���)
*/

/*
    bit�� byte
    bit : ���� ���� ������ ����
    byte : 1byte == 8bit
*/

/*
    char
    int
    longlong
    float
    double
    long double
*/

int main()
{
    //char : �� ���ڸ� ǥ���� �� ��� - 1byte
    char c1 = 'A';
    char c2 = 65; //ASCII

    printf("Character c1 : %c\n", c1);
    printf("Character c2 : %c\n", c2);
    printf("Character size : %d\n", sizeof(char));
    printf("Character size : %d\n", sizeof(c1));

    //������
    short s = 1; //2byte (-32768 ~ 32767)
    int num = 0; //4byte (-21�� ~ 21��)
    
    printf("num : %d\n", num);
    printf("int size : %d\n", sizeof(int));

    //�Ǽ��� - �ε��Ҽ��� ���

    float f = 0.123f; //4byte
    double d = 0.1234; //8byte

    printf("���� �Ҽ��� : %f\n", f);
    printf("�ε� �Ҽ��� : %e\n", f);

    //�ε� �Ҽ����� ����
    float sum = 0.1f;

    for (int i = 0; i < 1000; i++)
    {
        sum += 0.1;
    }

    printf("%f\n", sum);


    //����
    bool isDash = false; //1byte

    printf("ĳ���� �뽬 ���� : %d\n", isDash);


    unsigned char c3; //0 ~ 255
    unsigned int i2; // 0 ~ 42��

    unsigned char cc = 129;
    printf("%d\n", cc);

    signed int ii;

    return 0;
}

/*
    ���� ����

    - ASCII �ڵ��?
    - ��ǻ���� �Ǽ� ǥ�� ���
*/