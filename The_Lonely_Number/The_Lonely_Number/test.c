#include<stdio.h>
#include<stdlib.h>

int Find_Lonely_Number(int* arr, int size);
void Print(int* arr, int size);

int main()
{
	int arr[9] = { 1,2,3,4,5,4,3,2,1 };
	int size = sizeof(arr) / sizeof(arr[0]);
	Print(arr,size);
	printf("该数组中单独的数字为%d\n", Find_Lonely_Number(arr,size));
	system("pause");
	return 0;
}

int Find_Lonely_Number(int* arr,int size)
{
	int lonely = 0;
	for (int i = 0; i < size; ++i)
	{
		lonely = lonely ^ arr[i];
	}
	return lonely;
}

void Print(int* arr,int size)
{
	for (int i = 0; i < size; ++i)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}