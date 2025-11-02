#include<stdio.h>
//指针交换地址
void swap(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	int a = 10;
	int b = 20;

	printf("调用前：%d, %d", a, b);
	swap(&a, &b);
	printf("调用后：%d, %d", a, b);

	return 0;
}