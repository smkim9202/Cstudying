/*
 ȫ������ �����ϸ� ���� C���
 ������ ����� ���α׷� ����� - �޷� ��ȯ��
*/

#include<stdio.h>

int main()
{
    float won = 0.0f, dollar = 0.0f; // ������ �ڷ����� ���� �Ҽ��� ���ڵ��� ��Ÿ���� �ʴ´�.

    printf("Input Won\n");
    scanf("%f", &won);

    dollar = won * 0.00089f;

    printf("\"���� ȯ���� 1�� = 0.00089�޷� �Դϴ�.\"\n");
    printf("Dallar = %f\n", dollar);
    printf("\a");

    return 0;
}