//问题描述
//在主函数中输入10个等长的字符串。用另一个函数对它们排序。然后在主函数输出这10个已排好序的字符串。
//问题解析
//先定义一个for循环循环10输入字符串，通过指针和冒泡算法对他们进行排序，在主函数中输出。

#include<stdio.h>
#include<string.h>
/*
char **sort(char **s)
{
	//通过冒泡算法对字符串进行排序。
	for(int i=0;i<10;i++)
	{
		if(strcmp(s[i],s[i+1])>0)
		{
			strcpy(p,s[i]);
			strcpy(s[i],s[i+1]);
			strcpy(s[i+1],p);
		}
	}
}
*///自己写的代码，提升空间太大，加油
/*
int main()
{
	int i,j;
	char s[10][10],**l;
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("请输入字符串：");
			scanf("%s",s[i][j]);
		}
	}
	//定义排序函数，传入指针。
	l = sort(s);
	//输出函数
	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			printf("%s\n",l[i][j]);
		}
	}

}*/
int main()
{
	void sort(char s[][6]);
	int i;
	char str[10][6];
	printf("input 10 strings:\n");
	for(i=0;i<10;i++)
	{
		scanf("%s",str[i]);
	}
	sort(str);
	printf("Now,the sequence is :\n");
	for(i=0;i<10;i++)
	{
		printf("%s\n",str[i]);
	}
	return 0;
}
void sort(char s[10][6])
{
	int i,j;
	char *p,temp[10];
	p=temp;
	for(i=0;i<9;i++)
		for(j=0;j<9-i;j++)
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(p,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],p);
			}
}















