//问题描述
//将n个数按输入时顺序的逆序排列，用函数实现
//问题分析
//先定义一个int型的数组，接收这n个数，通过函数将此数组逆序输出。


#include<stdio.h>

int test(int a[])
{
	for(int i=9;i>0;i--)
	{
		printf("%d\n",a[i]);
	}
}
int main()
{
	int a[20]={0};
	printf("请输入10个以内的数：");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("-------------------");
	test(a);

}
