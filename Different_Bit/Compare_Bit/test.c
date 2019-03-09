#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Cmp_Bit(int num1, int num2);

int main()
{
	int num1 = 0;
	int num2 = 0;
	int cmp = 0;							//比较结果
	printf("请输入两个数字：\n");
	scanf("%d %d", &num1, &num2);
	cmp = Cmp_Bit(num1, num2);
	printf("%d 和 %d 不同的二进制位的个数为%d\n", num1, num2, cmp);
	system("pause");
	return 0;
}

int Cmp_Bit(int num1, int num2)
{
	int count = 0;					//不同的二进制位的个数
	for (int i = 31; i >= 0; --i)
	{
		int p1 = num1 >> i;
		int p2 = num2 >> i;
		if ((p1 & 1) != (p2 & 1))
		{
			++count;
		}
	}
	return count;
}