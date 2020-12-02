/*
 홍정모의 따라하며 배우는 C언어
 간단한 입출력 프로그램 만들기 - 달러 변환기
*/

#include<stdio.h>

int main()
{
    float won = 0.0f, dollar = 0.0f; // 정수형 자료형을 쓰면 소수점 숫자들은 나타나지 않는다.

    printf("Input Won\n");
    scanf("%f", &won);

    dollar = won * 0.00089f;

    printf("\"현재 환율은 1원 = 0.00089달러 입니다.\"\n");
    printf("Dallar = %f\n", dollar);
    printf("\a");

    return 0;
}