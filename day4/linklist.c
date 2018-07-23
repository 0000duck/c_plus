#include<stdio.h>
#include<stdlib.h>
typedef struct link
{
	int num;
	struct link *next;
}linklist;

void test01()
{
	struct link a,b,c,d,e;
	linklist *li;
	a.num = 10;
	b.num = 20;
	c.num = 30;
	d.num = 40;
	e.num = 50;
	e.next = NULL;
	li = &(a);
	a.next = &(b);
	b.next = &(c);
	c.next = &d;
	d.next = &e;
	while(li!=NULL)
	{
		printf("%d\n",li->num);
		li=li->next;
	}
}

void test02()
{
	linklist *a,*b,*c,*d,*e;
	a = malloc(sizeof(linklist));
	b = malloc(sizeof(linklist));
	c = malloc(sizeof(linklist));
	d = malloc(sizeof(linklist));
	e = malloc(sizeof(linklist)); 
	a->num=10;
	b->num=20;
	c->num=30;
	d->num=40;
	e->num=50;
	e->next=NULL;
	a->next=b;
	b->next=c;
	c->next=d;
	d->next=e;
	while(a!=NULL)
	{
		printf("-----%d\n",a->num);
		a=a->next;
	}
	free(a);
	free(b);
	free(c);
	free(d);
	free(e);
}

int main()
{
	//test01();
	test02();
}
