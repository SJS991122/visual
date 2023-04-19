/*
    ���(radix)

    10����(decimal)
    ex) 123.45
        = (1 * 10^2) + (2 * 10^1) + (3 * 10^0) + (4 * 10^-1) + (5 * 10^-2)

    2����(Binary)
    - 0b�� �ٿ� ǥ��

    ex) 101.101
        = (1 * 2^2) + ...

    8����(Octal)
    11011110 => 1 101 110 => 156

    16����(Hexa_Decimal)
    0 1 2 3 4 5 6 7 8 9 a b c d e f
    - 0x�� �ٿ� ǥ��
    => 11100101 => 1110 0101 => e5
 */

#include <stdio.h>

int main()
{
    int d = 100;
    int b = 0b100;
    int o = 0100;
    int hd = 0x100;

    printf("10���� : %d\n", d);
    printf("2����  : %d\n", b);
    printf("8����  : %d\n", o);
    printf("16���� : %d\n", hd);

    int i1 = 100'000'000;

    printf("%d\n", i1);

    return 0;
}