#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	int stid;
	char stname[50];
	int stmarks;
}stu;
typedef struct node{
	struct student info;
	struct node *next;
}node;
node *start=NULL;
void create(student n)
{
	node *tmp=(node *)malloc(sizeof(node));
	tmp->info=n;
	tmp->next=NULL;
	if(start==NULL)
	{
		start=tmp;
	}
	else
	{
		node *i=start;
		while(i->next!=NULL)
		{
			i=i->next;
		}
		i->next=tmp;
	}
}
void show()
{
	node *i=start;
	printf("Roll\tName\t\tMarks\n");
	printf("--------------------------------\n");
	while(i!=NULL)
	{
		printf("%d\t%s\t%d\n",i->info.stid,i->info.stname,i->info.stmarks);
		i=i->next;
	}
}
int main()
{
	int i;
	stu c[]={{1,"Arnab Roy",90},{2,"Aritra Das",91},{3,"Deep Pati",92}};
	for(i=0;i<3;i++)
	{
		create(c[i]);
	}
	show();	
}
