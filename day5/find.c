#include<stdio.h>
int test01(char *a,char *b)
{

	char *l,*m,*n;
	l = a;
	m = b;
	int num=0;
	for(int i=0;*l!='\0';i++)
	{
		printf("%c",*l);
		l++;
		//printf("litaimin");
		if(*l==*m)
		{
			num=i;
			m++;
		}
		if(*(m-1)=='\0')
		{
			return num;
		}
	}
}
int main()
{
	char a[] = "adhfashijfdnf";
	char b[] = "dnf";
	int x;
	x=test01(a,b);
	if(x!=-1)
	{
		printf("\n%d\n",x);
	}
}
