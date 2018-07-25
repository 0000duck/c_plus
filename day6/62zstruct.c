#include<stdio.h>
#include<stdlib.h>

typedef struct teacher
{
	char *name;
	char **student;	
}teac;

//分配内存
void allocate(teac ***teacher)
{
	//先分配3个3级指针
	teac **arr =  malloc(sizeof(teac *)*3);
	//在分配一个char型指针，之后在分配四个char *指针
	for(int i=0;i<3;i++)
	{
		arr[i] = malloc(sizeof(teac));
		arr[i]->name = malloc(sizeof(char)*64);
		sprintf(arr[i]->name,"teacher_%d",i);
		arr[i]->student = malloc(sizeof(char *)*4);
		for(int j=0;j<4;j++)
		{
			arr[i]->student[j] = malloc(sizeof(char)*64);
			sprintf(arr[i]->student[j],"%s_student_%d",arr[i]->name,j);
		}
	}
	//在分配四个char型指针。
//	return arr;
	*teacher = arr;
}
//输出函数
void printarr(teac **arr)
{
	for(int i=0;i<3;i++)
	{
		printf("teacher 's name = %s\n",arr[i]->name);
		for(int j=0;j<4;j++)
		{
			printf("student 's name = %s\n",arr[i]->student[j]);
		}
	}
}
//测试函数
void test01()
{
	teac **teacher=NULL;
	allocate(&teacher);
	printarr(teacher);
}
int main()
{
	test01();
}
