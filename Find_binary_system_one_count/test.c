#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Count_one_bits(unsigned int value);

int main()
{
	unsigned int num;
	printf("请输入要转换为二进制的数字：\n");
	scanf("%d", &num);
	int count = Count_one_bits(num);
	printf("%d转换为二进制后有%d个 1 \n", num, count);
	system("pause");
	return 0;
}

int Count_one_bits(unsigned int value)
{
	int binary_count=0;								//表示二进制数
	int remainder[1024];
	int k = 0;
	int count = 0;
	for ( int i=0 ; value != 0 ;++i)					//将十进制转化为二进制并储存到数组中
	{
		remainder[i] = value % 2;
		value = value / 2;
		++k;
	}
	for (int i = k ; i > 0 ; --i)
	{
		if (remainder[i] == 1)
		{
			++count;
		}
	}
	return count;
}
