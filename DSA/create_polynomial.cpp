#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
	int coef, exp;
	struct node *link;
} node;
node *create(int c, int e)
{
	node *tmp = (node *)malloc(sizeof(node));
	tmp->coef = c;
	tmp->exp = e;
	tmp->link = NULL;
	return tmp;
}
node *create_poly(node *p, int c, int e)
{
	node *tmp = create(c, e);
	if (p == NULL)
	{
		p = tmp;
	}
	else
	{
		node *i = p;
		while (i->link != NULL)
		{
			i = i->link;
		}
		i->link = tmp;
	}
	return p;
}
node *add(node *p1, node *p2, node *p3)
{
	int c, e;
	node *tmp, *rear;
	while (p1 != NULL && p2 != NULL)
	{
		if (p1->exp > p2->exp)
		{
			c = p1->coef;
			e = p1->exp;
			p1 = p1->link;
		}
		else if (p2->exp > p1->exp)
		{
			c = p2->coef;
			e = p2->exp;
			p2 = p2->link;
		}
		else
		{
			c = p1->coef + p2->coef;
			e = p1->exp;
			p1 = p1->link;
			p2 = p2->link;
		}
		tmp = create(c, e);
		if (p3 == NULL)
			p3 = rear = tmp;
		else
		{
			rear->link = tmp;
			rear = tmp;
		}
	}
	if (p1 != NULL)
	{
		while (p1 != NULL)
		{
			tmp = create(p1->coef, p1->exp);
			rear->link = tmp;
			rear = tmp;
			p1 = p1->link;
		}
	}
	else if (p2 != NULL)
	{
		while (p2 != NULL)
		{
			tmp = create(p2->coef, p2->exp);
			rear->link = tmp;
			rear = tmp;
			p2 = p2->link;
		}
	}
	return p3;
}
void show(node *p)
{
	while (p != NULL)
	{
		printf("%dx^%d =>", p->coef, p->exp);
		p = p->link;
	}
}
int main()
{
	int c[] = {1, 5, -7, 6};
	int e[] = {8, 4, 2, 1};
	int c1[] = {2, 7, -3, 2};
	int e1[] = {9, 5, 4, 3};
	int i;
	node *p1 = NULL, *p2 = NULL, *p3 = NULL;
	for (i = 0; i < 4; i++)
	{
		p1 = create_poly(p1, c[i], e[i]);
		p2 = create_poly(p2, c1[i], e1[i]);
	}
	show(p1);
	printf("\n");
	show(p2);
	p3 = add(p1, p2, p3);
	printf("\n");
	show(p3);
}
