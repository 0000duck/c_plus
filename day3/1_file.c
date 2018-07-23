#include<stdio.h>
#include<string.h>
int main1()
{
	FILE *f_write;
	f_write = fopen("test1.txt","w");
	if(f_write == NULL)
	{
		return -1;
	}
	char buf[]="asdfjhfakjsdfhakl";

	for(int i=0;i<strlen(buf);i++)
	{
		fputc(buf[i],f_write);
	}
	fclose(f_write);
}


int main()
{
	FILE *f_w;
	f_w = fopen("test2.txt","w");

	if(f_w == NULL)
	{
		return -1;
	}

	char buf[] = {
		"afshdjlhalaf\n"
		"hdsfajhufweuh\n"
	};
	for(int i=0;i<1;i++)
	{
		fputs(buf,f_w);
	}
	fclose(f_w);
}
