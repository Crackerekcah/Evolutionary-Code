#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void Find_Binary_Odd(int num);
void Find_Binary_Even(int num);

int main()
{
	int num;
	scanf("%d", &num);
	Find_Binary_Odd(num);
	Find_Binary_Even(num);
	system("pause");
	return 0;
}

void Find_Binary_Odd(int num)
{
	int p = 0;
	printf("ʮ������%d�Ķ����Ƶ�����λ�ǣ�\n",num);
	for (int i = 31; i >= 0; i = i - 2)
	{
		p = (num >> i) & 1;
		printf("%d ", p);
	}
}

void Find_Binary_Even(int num)
{
	int p = 0;
	printf("ʮ������%d�Ķ����Ƶ�ż��λ�ǣ�\n",num);
	for (int i = 30; i >= 0; i = i - 2)
	{
		p = (num >> i) & 1;
		printf("%d ", p);
	}
}