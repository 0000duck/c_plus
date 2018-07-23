#include<stdio.h>
#include<stdlib.h>
int main()
{
	char c[100],ch,t;
	int l=0,i,j;
	FILE *re1;
	FILE *re2;
	FILE *re3;
	re1 = fopen("A","r");
	re2 = fopen("B","r");
	re3 = fopen("C","w");
	if(!re1 || !re2 || !re3)
	{
		printf("can not open file\n");
		exit(0);
	}
	for(i =0;(ch=fgetc(re1))!=EOF;i++)
	{
		c[i]=ch;
		putchar(c[i]);
	}	
	
	
	for(j = i;(ch=fgetc(re2))!=EOF;j++)
	{
		c[j]=ch;
		putchar(c[j]);
	}
	for(i=0;i<100;i++)
	{
		for(j=i+1;j<100;j++)
		{
			if(c[i]>c[j])
			{
				t=c[i];
				c[i]=c[j];
				c[j]=t;
			}
		}
		putchar(c[i]);
	}
	

	fclose(re1);
	fclose(re2);
	fclose(re3);

}
