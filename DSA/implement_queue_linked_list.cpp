#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
} node;
node *front = NULL;
node *rear = NULL;
void insert(int n)
{
    node *tmp = (node *)malloc(sizeof(node));
    tmp->info = n;
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
int Delete()
{
    if (front == NULL)
    {
        printf("\n Queue is empty.");
        return 0;
    }
    int n = front->info;
    node *temp = front;
    front = front->next;
    free(temp);
    if (front == NULL)
    {
        rear = NULL;
    }
    return n;
}
void show()
{
    node *i = front;
    printf("\n List is:");
    while (i != NULL)
    {
        printf("%4d", i->info);
        i = i->next;
    }
}
int main()
{
    int n, ch;
    while (1)
    {
        printf("\n1...insert \n2...delete \n0...exit:");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("\n Enter the no:");
            scanf("%d", &n);
            insert(n);
            show();
            break;
        case 2:
            n = Delete();
            if (n != 0)
            {
                printf("\n deleted item=%d", n);
                show();
            }
            break;
        }
    }
}
