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
void del_beg()
{
	if (start == NULL)
	{
		printf("\n List is empty");
		return;
	}
	else
	{
		node *tmp = start;
		start = start->next;
		tmp->prev = NULL;
		free(tmp);
	}
}
void del_end()
{
	if (start == NULL)
	{
		printf("\n List is empty");
		return;
	}
	else
	{
		node *prevnode = NULL;
		node *tmp = start;
		while (tmp->next != NULL)
		{
			prevnode = tmp;
			tmp = tmp->next;
		}
		if (tmp == start)
		{
			start = NULL;
		}
		else
		{
			prevnode->next = NULL;
			tmp->prev = NULL;
		}
		free(tmp);
	}
}
void del_desire(int pos)
{
	int i = 1, count = 0;
	node *tmp = start;
	node *j = start;
	while (j != NULL)
	{
		count++;
		j = j->next;
	}
	if (pos > count || pos < 1)
	{
		printf("\n Invalid position");
		return;
	}
	if (pos == 1)
	{
		start = start->next;
		tmp->prev = NULL;
		tmp->next = NULL;
		free(tmp);
	}
	else
	{
		while (i < pos - 1)
		{
			tmp = tmp->next;
			i++;
		}
		node *nextnode = tmp->next;
		tmp->next = nextnode->next;
		nextnode->prev = NULL;
		nextnode->next = NULL;
		free(nextnode);
	}
}
void show()
{
	node *i = start;
	while (i != NULL)
	{
		printf("%4d", i->info);
		i = i->next;
	}
}
int main()
{
	int n, x, pos;
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
	printf("\nList is:");
	show();
	printf("\n0...exit \n1...delete the beg node \n2...delete the last node \n3...delete the desire node :");
	scanf("%d", &x);
	switch (x)
	{
	case 0:
		exit(0);
		break;
	case 1:
		del_beg();
		printf("\n List is:");
		show();
		break;

	case 2:
		del_end();
		printf("\n List is:");
		show();
		break;

	case 3:
		printf("\n Enter the postion:");
		scanf("%d", &pos);
		del_desire(pos);
		printf("\n List is:");
		show();
		break;

	default:
		printf("\n List is:");
		show();
		exit(0);
		break;
	}
}
