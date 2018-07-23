#include<stdio.h>
typedef struct date
{
	int year;
	int month;
	int day;
}M;
int main()
{
	struct date l;
	scanf("%d",&l.year);
	scanf("%d",&l.month);
	scanf("%d",&l.day);
	
	int mday;
	mday = l.month*30+l.day;
	printf("This is the year of %d ,the mday is %d\n",l.year,mday);
	printf("%d,%d,%d\n",l.year,l.month,l.day);		
}
