#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int num;
	int name[64];	
	struct student *next;
}stu;

//构建动态链表
stu * jianli()
{
	//构建头尾节点
	stu *header = malloc(sizeof(stu));
	stu *ender = malloc(sizeof(stu));
//	header->next = NULL;
	ender = header;
	//申请内存
	int flag=0;
	while(1)
	{
		scanf("%d",&flag);
		if(flag==-1)
		{
			break;
		}
		stu * newnode = malloc(sizeof(stu));
		newnode->num = flag;
		newnode->next = NULL;
		ender->next = newnode;
		ender = newnode;	
	}
	return header;	
}
//遍历函数
void foreach(stu *header)
{
	if(header==NULL)
	{
		return;
	}
	//构建一个新指针
	stu * nnode = header->next;
	while(nnode != NULL)
	{
		printf("::::::%d\n",nnode->num);
		nnode = nnode->next;
	}
	//输出
//	free(nnode);
}
//一首凉凉送给自己写的代码，运行到插入链表就死机。
//插入链表
/*
void insert(stu *header)
{
	//先遍历链表找到要插入的位置
	printf("请输入要插入的位置：");
	int val;
	scanf("%d",&val);
	stu *nnnode = header->next;
	while(nnnode!=NULL)
	{
		if(nnnode->num==val)
		{
			stu *snewnode = malloc(sizeof(stu));
			snewnode->num=val;
			nnnode->next=snewnode;
			snewnode->next=nnnode->next->next;
		}
		nnnode=nnnode->next;
	}
	//申请内存，开辟新节点
	//让前节点指向新节点，新节点指向后一个节点
}*/

/*
//插入链表
void insert_linklist(stu *pHeader,int oldval,int newval)
{
	//创建新链表
	//遍历链表
	//
}
*/
//测试函数
void test01()
{
	stu *pheader = jianli();
	foreach(pheader);
//	insert(pheader);
}

int main()
{
	test01();
}
