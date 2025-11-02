#include<stdio.h>
//求给定数组最大最小值
//1.定义函数
void getMaxAndMin(int arr[], int len, int* max, int* min)
{
	*max = arr[0];

	for (int i = 0; i < len; i++)
	{
		if (arr[i] > *max)
		{
			*max = arr[i];
		}
	}
}

int main()
{
	//2.定义数组
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int len = sizeof(arr) / sizeof(int);

	//3.调用函数
	int max = arr[0];
	int min = arr[0];

	getMaxAndMin(arr, len, &max, &min);

	printf("数组的最大值为%d\n", max);
	printf("数组的最小值为%d\n", min);

	return 0;
}