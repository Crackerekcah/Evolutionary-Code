#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

int Fibonacci(int n);

int main()
{
	int n = 0;
	printf("��������Ҫ���ҵڼ���쳲���������\n");
	scanf("%d", &n);
	int fib = Fibonacci(n);
	printf("��%d��쳲�������Ϊ%d\n", n, fib);
	system("pause");
	return 0;
}

int Fibonacci(int n)
{
	int num1 = 1;
	int num2 = 1;
	int tmp;
	if (n > 2)
	{
		return Fibonacci(n - 1) + Fibonacci(n - 2);
	}
	else
	{
		return 1;
	}
}