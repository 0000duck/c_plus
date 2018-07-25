#include<stdio.h>
//实现斐波那切数列，首先应该实现一个递归函数
//后面的数等于前面的两个数相加，假如循环到50结束
//应该是从0开始，之后到
int test(int n)
{
	if(n<2)
	{
		return 1;
	}
	else
	{
		return test(n-1)+test(n-2);
	}
}

//对斐波那切数列实现升级
//使用静态变量使运算的结果存储在静态变量区这样可以减少
int test1(int n)
{
	if(n<2)
		return 1;
	static int m[2]=0;
	m[1]=m[0];
	m[0]=test(n-1);
	return m[0]+m[1];

}
int main()
{
	int l;
//	l=test(5);
	l=test1(5);
	printf("%d\n",l);
}
