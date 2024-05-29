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
		tmp->next = start;
	}
	else
	{
		tmp->next = start->next;
		start->next = tmp;
		start = tmp;
	}
}
void add_beg(int n)
{
	node *tmp = (node *)malloc(sizeof(node));
	tmp->info = n;
	tmp->next = NULL;
	if (start == NULL)
	{
		start = tmp;
		tmp->next = start;
	}
	else
	{
		tmp->next = start->next;
		start->next = tmp;
	}
}
void add_end(int n)
{
	node *tmp = (node *)malloc(sizeof(node));
	tmp->info = n;
	tmp->next = NULL;
	if (start == NULL)
	{
		start = tmp;
		tmp->next = start;
	}
	else
	{
		tmp->next = start->next;
		start->next = tmp;
		start = tmp;
	}
}
void add_desire(int pos)
{
	node *i = start->next;
	int j, c = 0, n;
	while (i != start)
	{
		c++;
		i = i->next;
	}
	c = c + 1;
	if (pos > c + 1)
	{
		printf("Invalid choice");
		return;
	}
	node *tmp = (node *)malloc(sizeof(node));
	printf("\n Enter the node:");
	scanf("%d", &tmp->info);
	if (pos == 1)
	{
		tmp->next = start->next;
		start->next = tmp;
	}
	else if (pos == c + 1)
	{
		tmp->next = start->next;
		start->next = tmp;
		start = tmp;
	}
	else
	{
		for (j = 1; j < pos && i->next != start; j++)
		{
			i = i->next;
		}
		if (i->next != start)
		{
			tmp->next = i->next;
			i->next = tmp;
		}
		else
		{
			tmp->next = i->next;
			i->next = tmp;
		}
	}
}
void show()
{
	node *i = start->next;
	if (start == NULL)
	{
		printf("\n List is empty");
		return;
	}
	else
	{
		node *i = start->next;
		while (i != start)
		{
			printf("%4d", i->info);
			i = i->next;
		}
		printf("%4d", i->info);
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
	printf("\n1...add a node at the beg \n2...add a node at the end \n3..add a node at desire place \n0...exit:\n");
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
		printf("\n Enter the place:");
		scanf("%d", &pos);
		add_desire(pos);
		printf("\n Updated list:");
		show();
	}
}
