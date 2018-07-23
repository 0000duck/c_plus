#include<stdio.h>
struct aa
{
	int num;
	char name[64];
};
int main()
{
	struct aa p1 ={20,"li"};	
	struct aa p2 ={18,"lei"};
	p1=p2;
	printf("%d,%s\n",p1.num,p1.name);	
	printf("%d,%s\n",p2.num,p2.name);	
}
