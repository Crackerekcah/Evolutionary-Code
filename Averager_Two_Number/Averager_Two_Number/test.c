#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Average1(int num1, int num2);
int Average2(int num1, int num2);
int Average3(int num1, int num2);

int main()
{
	int num1 = 0;
	int num2 = 0;
	printf("�������������֣�\n");
	scanf("%d %d", &num1, &num2);
	printf("%d��%d��ƽ����Ϊ%d\n", num1, num2, Average1(num1,num2));
	printf("%d��%d��ƽ����Ϊ%d\n", num1, num2, Average2(num1,num2));
	printf("%d��%d��ƽ����Ϊ%d\n", num1, num2, Average3(num1,num2));
	system("pause");
	return 0;
}

int Average1(int num1, int num2)
{
	return ((num1&num2) + ((num1^num2) >> 1));
}

int Average2(int num1, int num2)
{
	return (num1 + ((num2 - num1) >> 1));
}

int Average3(int num1, int num2)
{
	return (num1 + num2) >> 1;
}