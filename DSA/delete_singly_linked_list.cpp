#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int info;
	struct node *next;
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
	}
	else
	{
		node *i = start;
		while (i->next != NULL)
		{
			i = i->next;
		}
		i->next = tmp;
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
void del_beg()
{
	if (start == NULL)
	{
		printf("\n List is Empty");
		return;
	}
	else
	{
		node *i = start;
		start = start->next;
		free(i);
	}
}
void del_end()
{
	node *tmp = start;
	node *prev = NULL;
	if (start == NULL)
	{
		printf("\n List is empty");
		return;
	}
	else
	{
		while (tmp->next != NULL)
		{
			prev = tmp;
			tmp = tmp->next;
		}
		if (tmp == start)
		{
			start = NULL;
		}
		else
		{
			prev->next = NULL;
		}
	}
	free(tmp);
}

void del_desire(int pos)
{
	int i = 1, c = 0;
	node *tmp = start;
	node *j = start;
	while (j != NULL)
	{
		c++;
		j = j->next;
	}
	if (pos > c || pos < 1)
	{
		printf("\n Invalid position");
		return;
	}
	if (pos == 1)
	{
		start = start->next;
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
		free(nextnode);
	}
}
int main()
{
	int n, x, pos;
	char ans;
	do
	{
		printf("\n Enter a value:");
		scanf("%d", &n);
		create(n);
		fflush(stdin);
		printf("\n Press 'y'to continue:");
		scanf("%c", &ans);
	} while (ans == 'y');
	printf("\nList is:");
	show();
	printf("\n1...delete a node at the beg \n2...delete a node at the end \n3...delete the desire node \n0...exit:\n");
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
		printf("\n Enter the position:");
		scanf("%d", &pos);
		del_desire(pos);
		printf("\n List is:");
		show();
	}
}
