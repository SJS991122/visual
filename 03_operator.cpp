#include <stdio.h>

int main()
{
    //���� ������ : =
    int a = 10;

    //��� ������ : + - * / %
    int b = 3;
    int result;

    result = a + b;
    printf("%d\n", result);

    result = a - b;
    printf("%d\n", result);

    result = a * b;
    printf("%d\n", result);

    result = a / b;
    printf("%d\n", result);

    result = a % b;
    printf("%d\n", result);

    //��ȣ ������ : + -

    //���� ���� ������
    a += b; //a = a + b

    //���� ������ : ++ --
    a = 1;
    b = 1;

    a = ++b; //����
    printf("a : %d, b : %d\n", a, b);

    a = 1;
    b = 1;

    a = b++; //����
    printf("a : %d, b : %d\n", a, b);
  
 /*
     �� ������ 
     == : ������ true, �ٸ��� false
     != : ������ false, �ٸ��� true
     < > <= >=
 */

/*
    �� ������
    && (and) : �� �� ���̸� true, �� �� false
    || (or)  : �� �� �ϳ��� ���̸� true �� �� false
    ! (not)  : true�� ��� false, false�� ��� true

    1. true && false => false
    2. true || false => true

    3. true && true  => true
    3. true || true  => true

    4. !true        => false
    5. !false       => true
*/

    // scanf

    //int num1, num2, num3;

    //scanf_s("%d %d %d", &num1, &num2, &num3);
    //printf("%d %d %d\n", num1, num2, num3);
     
    //���� ������ - ���� ������
    //���ǽ� ? ��ȯ��1 : ��ȯ��2

#pragma region Attack
    int playerDamage = 50;
    int enemyHp = 550;

    printf("�÷��̾��� ���ݷ� : %d\n", playerDamage);
    printf("���� ���� ü�� : %d\n\n", enemyHp);

    int attackCount = 0;
    printf("�� �� �����Ͻðڽ��ϱ�? : ");
    scanf_s("%d", &attackCount);

    enemyHp -= playerDamage * attackCount;
    printf("���� ���� ü�� : %d\n\n", enemyHp);

#pragma endregion

#pragma region Grab
    int grabRange;
    int distance = 300;
    bool catchenemy = true; // 1 0

    printf("������ �Ÿ� : %d\n", distance);

    printf("�׷� ��Ÿ� : ");
    scanf_s("%d", &grabRange);

    grabRange >= distance ? catchenemy = true : catchenemy = false;

    printf("���� óġ�Ͽ�����? : %d\n", catchenemy);
#pragma endregion


    return 0;
}