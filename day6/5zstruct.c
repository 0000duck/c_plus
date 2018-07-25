#include<stdio.h>
#include<stdlib.h>
typedef struct student
{
	char *name;
	int age;
}stu;
//分配内存函数
stu **allocate()
{
	//逐级分配内存
	stu **parr = malloc(sizeof(stu *)*3);
	for(int i=0;i<3;i++)
	{
		//给结构体分配空间
		parr[i] = malloc(sizeof(stu));
		//给name分配空间
		parr[i]->name = malloc(sizeof(char)*64);
		//给名字命名
		sprintf(parr[i]->name,"ge_%d",i);
		//给年龄赋值
		parr[i]->age = 20+i;
	}
	return parr;
}
//输出函数
void printarray(stu **array,int len)
{
	for(int i=0;i<len;i++)
	{
		printf("name:%s   age:%d   \n",array[i]->name,array[i]->age);
	}
}
//测试函数
void test01()
{
	stu ** parray = allocate();
	printarray(parray,3);
}
int main()
{
	test01();	
}
