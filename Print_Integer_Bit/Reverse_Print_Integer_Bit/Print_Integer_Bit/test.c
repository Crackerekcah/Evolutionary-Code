#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void Print_Int_Bit(int num);
int main()
{
	int num;
	printf("请输入一个整数：\n");
	scanf("%d", &num);
	Print_Int_Bit(num);
	system("pause");
	return 0;
}

void Print_Int_Bit(int num)
{
	if (num != 0)
	{
		if (num < 0)
		{
			num = -num;
		}
		printf("%d ", num % 10);
		Print_Int_Bit(num / 10);
	}
}