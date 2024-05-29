#include <stdio.h>
#include <stdlib.h>
typedef struct pq
{
	int info, prio;
	struct pq *next;
}pq;
pq *rear = NULL, *front = NULL;
void create(int n, int p)
{
	pq *tmp = (pq *)malloc(sizeof(pq));
	tmp->info = n;
	tmp->prio = p;
	tmp->next = NULL;
	if (rear == NULL)
	{
		rear = front = tmp;
	}
	else
	{
		rear->next = tmp;
		rear = tmp;
	}
}
void sort()
{
	pq *i, *j;
	int tmp;
	for (i = front; i != NULL; i = i->next)
	{
		for (j = i->next; j != NULL; j = j->next)
		{
			if (i->prio < j->prio)
			{
				tmp = i->info;
				i->info = j->info;
				j->info = tmp;

				tmp = i->prio;
				i->prio = j->prio;
				j->prio = tmp;
			}
		}
	}
}
void show()
{
	pq *i;
	for (i = front; i != NULL; i = i->next)
	{
		printf("\n %d\t%d", i->info, i->prio);
	}
}
int main()
{
	create(10, 4);
	create(8, 10);
	create(20, 2);
	create(7, 9);
	sort();
	show();
}
