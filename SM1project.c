/*
 홍정모의 따라하며 배우는 C언어 
 간단한 입출력 프로그램 만들기 - 두 수 더하기
*/

#include<stdio.h>

int main()
{
    int i = 0, j = 0, sum = 0; // 변수는 무조건 초기화하는것을 권장

    printf("Input two integers\n");

    scanf("%d%d", &i, &j);

    sum = i + j;

    printf("Your numbers are %d and %d\n", i, j);
    printf("%d + %d = %d\n", i, j, sum);

    return 0;
}