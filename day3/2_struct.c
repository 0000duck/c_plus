#include<stdio.h>
#include<stdlib.h>
#pragma pack(show)
struct Teacher
{
	char *name;
	char **Students;
};
//shen qing nei cun
void allocateSpace(struct Teacher ***teacher)
{
	struct Teacher **pArray = malloc(sizeof(struct Teacher *)*3);
	for(int i =0;i<3;i++)
	{
		pArray[i]=malloc(sizeof(struct Teacher));

		pArray[i]->name = malloc(sizeof(char)*64);
		sprintf(pArray[i]->name,"Teacher_%d",i+1);
		pArray[i]->Students = malloc(sizeof(char *)*4);
		for(int j=0;j<4;j++)
		{
			pArray[i]->Students[j]=malloc(sizeof(char)*64);
			sprintf(pArray[i]->Students[j],"%s_Student_%d",pArray[i]->name,j+1);
		}
	}

	*teacher = pArray;
}

void showArray(struct Teacher ** pArray,int len)
{
	for(int i=0;i<len;i++)
	{
		printf("%s\n",pArray[i]->name);
		for(int j=0;j<4;j++)
		{
			printf("      %s\n",pArray[i]->Students[j]);
		}
	}
}

void freeSpace(struct Teacher **pArray,int len)
{
	for(int i =0;i<len;i++)
	{
		if(pArray[i]->name !=NULL)
		{
			free(pArray[i]->name);
			pArray[i]->name = NULL;
		}
		for(int j=0;j<4;j++)
		{
			if(pArray[i]->Students[j]!=NULL)
			{
				free(pArray[i]->Students[j]);
				pArray[i]->Students[j] = NULL;
			}
		}

		free(pArray[i]->Students);
		pArray[i]->Students = NULL;


		free(pArray[i]);
		pArray[i] = NULL;
	}
	free(pArray);
	pArray = NULL;
}

void test01()
{
	struct Teacher ** pArray = NULL;
	allocateSpace(&pArray);
	showArray(pArray,3);
	freeSpace(pArray,3);
}
int main()
{
	test01();	
}
