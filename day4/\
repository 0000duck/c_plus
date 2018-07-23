#include<stdio.h>
#include<stdlib.h>

//先建立一个结构体
typedef struct linknode
{
	int num;
	struct linknode *next;	
}linklist;

//建立测试函数
linklist * initlink()
{
//建立头尾节点

linklist *header = malloc(sizeof(linklist));
linklist *ender = malloc(sizeof(linklist));
//建立关系
//header->next= NULL;
ender->next = header;
int val;
//输入数据
	while(1)
	{

		printf("请输入数据：\n");
		scanf("%d",&val);
		if(val==-1)
		{
			break;
		}
	//分配内存
	
		linklist *newnode = malloc(sizeof(linklist));
		newnode->num=val;
		newnode->next=NULL;
		ender->next = newnode;
		ender = newnode;
	}
	return header;
}
void foreach(linklist *pheader)
{
	//linklist *pheader = malloc(sizeof(linklist));
	printf("开始遍历链表\n");
	//遍历链表

	linklist *p = pheader->next;
	while(p!=NULL)
	{
		printf("%d\n",p->num);
		p = p->next;
	}

}
void test01()
{
	linklist *pheader = initlink();
	foreach(pheader);
}
int main()
{
	test01();
	printf("by:lige\n");
}
