#include<stdio.h>
int main()
{
	int i,j;
	char a[]="aqwertyuiopzxcvbnmsdfghjkl";
	for(int i=0;a[i]!='\0';i++)
	{
		for(int j=i+1;a[j]!='\0';j++)
		{
			if(a[i]>=a[j])
			{
				char tmp;
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;
			}
		}

	}
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",a[i]);
	}
	printf("\n");
}
