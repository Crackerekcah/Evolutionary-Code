#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Fibonacci(int n);

int main()
{
	int n=0;
	printf("请输入要求第几个斐波那契数列：");
	scanf("%d", &n);
	int fib = Fibonacci(n);
	printf("第%d个斐波那契数为%d\n",n,fib);
	system("pause");
	return 0;
}

int Fibonacci(int n)
{
	int res=1;				//表示第n个斐波那契数列
	int num1 = 1;
	int num2 = 1;
	if (n > 2)
	{
		for (int i = 2; i < n; ++i)
		{
			res = num1 + num2;
			num2 = num1;
			num1 = res;
		}
	}
	return res;
}