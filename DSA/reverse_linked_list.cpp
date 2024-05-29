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
void rev()
{
	node *ptr = start, *next = start, *prev = NULL;
	while (next != NULL)
	{
		next = next->next;
		ptr->next = prev;
		prev = ptr;
		ptr = next;
	}
	start = prev;
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
	printf("\n After reverse:");
	rev();
	show();
}
