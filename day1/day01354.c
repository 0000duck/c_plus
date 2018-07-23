#include<stdio.h>
/*
int main1()
{
	char m[20];
	m = fgets();
	for(int i=0;i<20;i++)
	{	
		if(m[i]>=65&&m[i]<=122)
		{
			if(m[i]>=97&&m[i]<=122)
				m[i]=m[i]-48;
		}	
	}
	printf("%s",m);
}*/
int main()
{
	char c;
	FILE *out;
	out = fopen("test","w");
	while(1)
	{
		c = getchar();
		if(c=='!')break;
		if(c>='a'&&c<='z')
		{
			c=c-'a'+'A';
		}
		fputc(c,out);
	}
	fclose(out);
}
