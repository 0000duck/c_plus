#include<stdio.h>
#include<stdlib.h>
//创建结构体
typedef struct student
{
	char *name;
	int age;
}stu;
//创建分配内存的函数
stu **allocate()
{
	//逐层分配内存
	stu ** parray = malloc(sizeof(stu *)*3);
	//先给一级指针分配内存
	for(int i=0;i<3;i++)
	{
		parray[i]=malloc(sizeof(stu));
		//给各个结构体分配内存
		parray[i]->name = malloc(sizeof(char)*64);
		//给名字分配内存
		//给名字赋值
		sprintf(parray[i]->name,"name_%d",i+1);
		parray[i]->age = i+20;
		//sprintf(parray[i]->age,"age_%d",20+i);
	}
	return parray;
}
//输出函数
/*
void foreach(stu **pheader)
{
	//先分配一个二级指针
	stu **arr = pheader;	
	//逐层遍历并且打印
	for(int i=0;i<3;i++)
	{
		printf("parray[i]->name = %s",i,parray[i]->name);
		printf("parray[i]->age = %d",i,parray[i]->age);
	}
}
*/

void printarray(stu **array,int len)
{
	for(int i=0;i<len;i++)
	{
		printf("姓名：%s    年龄：%d   \n",array[i]->name,array[i]->age);
	}
}
//释放内存的函数
//测试函数
void test01()
{
	stu **array = NULL;
	array = allocate();
	printarray(array,3);
}
int main()
{
	test01();
	//
}
