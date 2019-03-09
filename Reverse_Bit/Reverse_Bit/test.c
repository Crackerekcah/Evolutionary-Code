#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include <math.h>

unsigned int Reverse_Bit(unsigned int value);

int main()
{
	int value = 0;
	unsigned int sum = 0;
	printf("请输入一个数字：\n");
	scanf("%d", &value);
	sum=Reverse_Bit(value);
	printf("翻转二进制后的值为%u\n", sum);				//这里注意是%u,因为得到的数字已经越界，不在int的范围内
	system("pause");
	return 0;
}

unsigned int Reverse_Bit(unsigned int value)
{
	int arr[32] = { 0 };
	unsigned int sum = 0;
	for (int i = 0; i < 32; ++i)
	{
		arr[i] = value & 1;
		value = value >> 1;
	}
	for (int i = 0; i < 32; ++i)
	{
		sum += arr[i] * pow(2, 32 - 1 - i);
	}
	return sum;
}