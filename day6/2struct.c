#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int num;
	struct student *next;
}stu;

//构建链表
stu * initlink()
{
	//构建头尾节点,并构建头尾节点关系
	stu *header = malloc(sizeof(stu));
	stu *ender = malloc(sizeof(stu));

	ender = header;
	//申请内存
	while(1)
	{
		int val;
		printf("please input num:");
		scanf("%d",&val);
		if(val==-1)
		{
			break;
		}	
		stu * newnode = malloc(sizeof(stu));
		newnode->num = val;
		newnode->next = NULL;
		ender->next = newnode;
		ender = newnode;

	}
	//构建关系
	return header;
}
//遍历链表
void foreach(stu *pheader)
{
	//先创建一个结构体指针
	stu *nnode = pheader;
	//注意第一个数
	nnode = nnode->next;
	//判断是否到尾节点
	while(nnode!=NULL)
	{
		printf(">>>>%d\n",nnode->num);
		nnode = nnode->next;
	}
	//输出num
}
//前端插入链表
void insertlink(stu *pheader,int oldval,int newval)
{
	//先创建两个链表
	stu *pronode = pheader;
	stu *pcnode = pheader->next;

	//遍历整个链表
	while(pcnode!=NULL)
	{	
		if(pcnode->num==oldval)
		{
			break;
		}
		pronode = pcnode;
		pcnode = pcnode->next;
	}
	stu *snode = malloc(sizeof(stu));
	snode->num=newval;
	pronode->next = snode;
	snode->next = pcnode;

	//创建新节点，申请内存
	//构建关系
}
//删除链表
void deletelink(stu *pheader,int oldval)
{
	//先构建一个指针
	stu *dpnode = pheader;
	stu *dnode = pheader->next;
	//遍历整个链表找到要删除的节点
	while(dnode!=NULL)
	{
		if(dnode->num==oldval)
		{
			break;
		}
		dpnode = dnode;
		dnode = dnode->next;
	}
	//重新构建节点
	dpnode->next =dnode->next;
	free(dnode);
}
//链表反转
void reverselink(stu *header)
{
	//构建三个指针节点
	stu *prenode = NULL;
	stu *curnode = header->next;
	stu *tailnode = NULL;
	//让pre刚开始为空，cur为header->next,tail节点为空
	while(curnode!=NULL)
	{
		prenode = curnode;
		curnode = curnode->next;
		
	}
	header->next = prenode;
	//当cur不为空就循环，让cur指向pre，到最后让header为cur，每次都要往后移。
}
//统计链表长度
void sizelink(stu *header)
{
	int size;
	stu *sizenode = header->next;
	while(sizenode!=NULL)
	{
		size++;
		sizenode = sizenode->next;
	}
	printf("链表长度为%d\n",size);
}
//测试函数
void test01()
{
	stu *pheader = initlink();
	foreach(pheader);
	printf("--------------第一次遍历结束-------------------\n");
	sizelink(pheader);
	insertlink(pheader,10,100);
	insertlink(pheader,20,200);
	insertlink(pheader,30,300);
	insertlink(pheader,40,400);
	insertlink(pheader,-1,500);
	foreach(pheader);
	printf("--------------第二次遍历结束-------------------\n");
	sizelink(pheader);
	deletelink(pheader,300);
	deletelink(pheader,40);
	deletelink(pheader,500);
	foreach(pheader);
	sizelink(pheader);
	printf("--------------第三次遍历结束-------------------\n");
	reverselink(pheader);
	foreach(pheader);
	printf("--------------第四次遍历结束-------------------\n");
	sizelink(pheader);
}
int main()
{
	test01();	
}
