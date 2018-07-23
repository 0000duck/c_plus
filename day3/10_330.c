#include<stdio.h>
#include<stdlib.h>

typedef struct student
{
	int number;
	float score;
	struct student *head;
	struct student *end;
}Node;

int main()
{
	Node a = NULL ,b = NULL;
	a = malloc(sizeof(struct student)*10);	
	b = malloc(sizeof(struct student)*10);
	
}
