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
	int binary_count=0;								//��ʾ��������
	int remainder[1024];
	int k = 0;
	int count = 0;
	for ( int i=0 ; value != 0 ;++i)					//��ʮ����ת��Ϊ�����Ʋ����浽������
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
