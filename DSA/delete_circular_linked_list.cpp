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
void del_beg()
{
	if (start == NULL)
	{
		printf("\n List is empty");
		return;
	}
	if (start->next == start)
	{
		free(start);
		start = NULL;
	}
	else
	{
		node *temp = start->next;
		start->next = temp->next;
		free(temp);
	}
}
void del_end()
{
	if (start == NULL)
	{
		printf("\n List is empty");
		return;
	}
	if (start->next == start)
	{
		free(start);
		start = NULL;
	}
	else
	{
		node *current = start->next;
		node *prev = NULL;
		while (current->next != start)
		{
			prev = current;
			current = current->next;
		}
		prev->next = start;
		free(current);
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
	int n, x;
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
	printf("\n1...delete the first node\n2...delete the last node\n0...exit:\n");
	scanf("%d", &x);
	switch (x)
	{
	case 0:
		exit(0);
		break;
	case 1:
		del_beg();
		printf("\n Updated list:");
		show();
		break;
	case 2:
		del_end();
		printf("\n Updated list:");
		show();
		break;
	}
}
