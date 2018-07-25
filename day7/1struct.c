#include<stdio.h>
#include<stdlib.h>

typedef struct teacher
{
	char *name;
	char **student;
}stu;

//分配内存函数
void allocatearr(stu ***teacher)
{
	//先定义一个指针变量
	stu **pArray = malloc(sizeof(stu *)*3);	
	//分配老师指针内存
	for(int i=0;i<3;i++)
	{
		pArray[i] = malloc(sizeof(stu));
		pArray[i]->name = malloc(sizeof(char)*64);
		sprintf(pArray[i]->name,"teacher_%d",i);
		pArray[i]->student = malloc(sizeof(char *)*4);
		for(int j=0;j<4;j++)
		{
			//给学生姓名分配内存，并且赋值。
			pArray[i]->student[j] = malloc(sizeof(char)*64);
			sprintf(pArray[i]->student[j],"%s_student_%d",pArray[i]->name,j);
		}

	}
	//分配老师name内存，并且赋予name
	//分配四个学生的指针内存，分配name内存并且赋予初值。
	*teacher = pArray;
}
//输出函数
void foreach(stu **array)
{
	for(int i=0;i<3;i++)
	{
		printf("teacher 's name =%s\n",array[i]->name);
		for(int j = 0;j<4;j++)
		{
			printf("student 's name = %s\n",array[i]->student[j]);
		}
	}
}
//测试函数
void test01()
{
	stu ** arr =NULL;
	allocatearr(&arr);
	foreach(arr);
}
int main()
{
	test01();
}


