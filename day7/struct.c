//问题描述
//有两个链表a和b，设结点中包含学号，姓名。从a链表中删去与b链表中有相同学号的那些结点。
//问题解析
//先构建链表a和b，结构中有一个int，和姓名char 64，之后通过双层遍历找到相同学号的结点，通过delete函数将该结点从a
//链表中删除，
#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int xuehao;
	char name[64];
}stu;

//分配内存函数


//测试函数
//删除函数
//主函数

