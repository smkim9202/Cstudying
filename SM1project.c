/*
 ȫ������ �����ϸ� ���� C��� 
 ������ ����� ���α׷� ����� - �� �� ���ϱ�
*/

#include<stdio.h>

int main()
{
    int i = 0, j = 0, sum = 0; // ������ ������ �ʱ�ȭ�ϴ°��� ����

    printf("Input two integers\n");

    scanf("%d%d", &i, &j);

    sum = i + j;

    printf("Your numbers are %d and %d\n", i, j);
    printf("%d + %d = %d\n", i, j, sum);

    return 0;
}