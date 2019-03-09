#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

void Order_Print_Int(int num);
int Count_bit(int num);

int main()
{
	int num;
	printf("请输入一个数字：\n");
	scanf("%d", &num);
	Order_Print_Int(num);
	system("pause");
	return 0;
}

void Order_Print_Int(int num)
{
	int tmp = 1;
	for (int i = 1; i < Count_bit(num); ++i)
	{
		tmp *= 10;
	}
	do {
		printf("%d ", num / tmp);
		num %= tmp;
		tmp /= 10;
	} while (num != 0);
}

int Count_bit(int num)
{
	int bit = 0;
	do {
		num /= 10;
		++bit;
	} while (num != 0);

	return bit;
}
