#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Count_one_bits(int value);

int main()
{
	int num;
	printf("请输入要转换为二进制的数字：\n");
	scanf("%d", &num);
	int count = Count_one_bits(num);
	printf("%d转换为二进制后有%d个 1 \n", num, count);
	system("pause");

	return 0;
}

int Count_one_bits(int value)
{
	int count = 0;
	for (int i = 0; i < 32; ++i)
	{
		if ((value & 1) == 1)
		{
			++count;
		}
		value = value >> 1;
	}
	return count;
}
