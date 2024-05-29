#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int info;
	struct node *next, *prev;
} node;
node *start = NULL;
void create(int n)
{
	node *tmp = (node *)malloc(sizeof(node));
	tmp->info = n;
	tmp->next = NULL;
	if (start == NULL)
	{
		start = tmp;
		tmp->prev = NULL;
	}
	else
	{
		node *i = start;
		while (i->next != NULL)
		{
			i = i->next;
		}
		i->next = tmp;
		tmp->prev = i;
	}
}
void show()
{
	node *i = start;
	while (i->next != NULL)
	{
		printf("%4d", i->info);
		i = i->next;
	}
	printf("%4d\n", i->info);
	while (i != NULL)
	{
		printf("%4d", i->info);
		i = i->prev;
	}
}
void palindrome()
{
	int flag = 0;
	node *i = start;
	while (i->next != NULL)
	{
		i = i->next;
	}
	node *j = start;
	while (j < i)
	{
		if (j->info != i->info)
		{
			flag = 1;
			break;
		}
		else
		{
			flag = 0;
			j = j->next;
			i = i->prev;
		}
	}
	printf("\n");
	if (flag == 0)
	{
		printf("\n Palindrome");
	}
	else
	{
		printf("Not");
	}
}
int main()
{
	int n;
	char ans;
	do
	{
		printf("\nEnter a value:");
		scanf("%d", &n);
		create(n);
		fflush(stdin);
		printf("\nPress 'y'to continue:");
		scanf("%c", &ans);
	} while (ans == 'y');
	show();
	palindrome();
}
