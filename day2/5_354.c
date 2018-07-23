#include<stdio.h>
#include<stdlib.h>
#define len sizeof(struct student)
typedef struct student
{
	int xuehao;
	char name[20];
	float score;
}Student;
int main()
{
	Student *stu = malloc(3*sizeof*stu);
	FILE *fp;
	int i,j;
	fp = fopen("stud","w");
	if(!fp)
	{
		printf("can not open file");
		exit(0);
	}
	for(i=0;i<3;i++)
	{
		scanf("%d,%s,%f",&stu[i].xuehao,stu[i].name,&stu[i].score);
		putchar(stu[i].xuehao,fp);
	}
	
	fclose(fp);
}
