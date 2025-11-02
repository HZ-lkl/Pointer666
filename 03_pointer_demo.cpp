#include<stdio.h>

int* method()
{
	static int a = 10;//此时变量一直保存到程序结束
	return &a;  
}

int main()
{
	int* p = method();

	printf("拖点时间\n");
	printf("拖点时间\n");
	printf("拖点时间\n");
	printf("拖点时间\n");
	printf("拖点时间\n");
	printf("拖点时间\n");
	printf("拖点时间\n");

	printf("%d\n", *p); //不加static变量随函数消失。加了之后变量则会一直保存，输出10

	return 0;
}