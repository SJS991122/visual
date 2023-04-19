#pragma once

#include <stdio.h>

int Compare(int num1, int num2);

/*
   과제 
 
    하이로우세븐 & Rpg

    52장의 카드를 입력받은 후, 5장의 카드를 오픈 시킨다.
    플레이어는 일정한 금액을 베팅한 후에, 다음 카드(히든 카드 ?)가
    하이(8 ~ K) 로우(A ~ 6), 세븐(7)일지를 추측한다.

    다음 카드를 맞힌다면, 베팅한 금액을 받고,
    세븐을 맞힐 경우 베팅액의 13배를 받는다.
*/

typedef struct
{
    int number;
    char shape[4];
}Trump;

