#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Count_one_bits(unsigned int value);

int main()
{
	unsigned int num;
	printf("������Ҫת��Ϊ�����Ƶ����֣�\n");
	scanf("%d", &num);
	int count = Count_one_bits(num);
	printf("%dת��Ϊ�����ƺ���%d�� 1 \n", num, count);
	system("pause");
	return 0;
}

int Count_one_bits(unsigned int value)
{
	int count = 0;
	while (value != 0)
	{
		if (value % 2 == 1)
		{
			++count;
		}
		value = value >> 1;
	}
	return count;
}
