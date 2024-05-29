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
int main()
{
	int n, pos;
	char ans;
	do
	{
		printf("\n Enter a value:");
		scanf("%d", &n);
		create(n);
		fflush(stdin);
		printf("\n Press y to continue:");
		scanf("%c", &ans);
	} while (ans == 'y');
	printf("\n List is:");
	show();
}
