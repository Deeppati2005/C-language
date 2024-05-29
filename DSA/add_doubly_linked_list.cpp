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
void add_beg(int n)
{
	node *tmp = (node *)malloc(sizeof(node));
	tmp->info = n;
	tmp->next = start;
	start = tmp;
	tmp->prev = NULL;
}
void add_end(int n)
{
	node *tmp = (node *)malloc(sizeof(node));
	tmp->info = n;
	tmp->next = NULL;
	node *i = start;
	while (i->next != NULL)
	{
		i = i->next;
	}
	i->next = tmp;
	tmp->prev = i;
}
void add_desire(int pos)
{
	int c = 0;
	int i;
	node *j = start;
	while (j != NULL)
	{
		c++;
		j = j->next;
	}
	if (pos > c + 1 || pos < 1)
	{
		printf("\n Invalid position");
		return;
	}
	else
	{
		node *tmp = (node *)malloc(sizeof(node));
		printf("\n Enter the data:");
		scanf("%d", &tmp->info);
		tmp->next = NULL;
		if (pos == 1)
		{
			tmp->next = start;
			start = tmp;
			tmp->prev = NULL;
		}
		else
		{
			node *j = start;
			for (i = 1; i < pos - 1; i++)
			{
				j = j->next;
			}
			tmp->prev = j;
			tmp->next = j->next;
			j->next = tmp;
			j->next->prev = tmp;
		}
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
	char ch;
	do
	{
		printf("\n Enter the node:");
		scanf("%d", &n);
		create(n);
		fflush(stdin);
		printf("\n Enter y to continue:");
		scanf(" %c", &ch);
	} while (ch == 'y');
	printf("\n List is:");
	show();
	printf("\n1...add a node at the beg \n2...add a node at the end \n3...add a node at the desire place \n0...exit:\n");
	scanf("%d", &x);
	switch (x)
	{
	case 0:
		exit(0);
		break;

	case 1:
		printf("\n Enter the node:");
		scanf("%d", &n);
		add_beg(n);
		printf("\n List is:");
		show();
		break;

	case 2:
		printf("\n Enter the node:");
		scanf("%d", &n);
		add_end(n);
		printf("\n List is:");
		show();
		break;

	case 3:
		printf("\n Enter the position of the node:");
		scanf("%d", &pos);
		add_desire(pos);
		printf("\n List is:");
		show();
		break;
	}
}