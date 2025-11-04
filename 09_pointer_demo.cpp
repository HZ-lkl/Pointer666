#include<stdio.h>


void swap(void* p1, void* p2, int len)
{
	char* pc1 = (char*)p1;
	char* pc2 = (char*)p2;

	char temp = 0;

	//以字节为单位，一个字节一个字节进行交换
	for (int i = 0; i < len; i++)
	{
		temp = *pc1;
		*pc1 = *pc2;
		*pc2 = temp;

		pc1++;
		pc2++;
	}
}

int main()
{
	/*
	void类型的指针
	*/

	//1.定义两个变量
	int a = 10;
	short b = 20;

	//2.定义两个指针
	int* p1 = &a;
	short* p2 = &b;

	//3输出打印
	printf("%d\n", *p1);
	printf("%d\n", *p2);

	void* p3 = p1;
	void* p4 = p2;
	//缺点：void类型的指针，无法获取变量里的数据，也不能进行加减运算
	//printf("%p\n", p3 + 1);

	//调用函数交换数据
	int c = 100;
	int d = 200;

	swap(&c, &d, 4);

	printf("c = %d, d = %d\n", c, d);

	return 0;

}