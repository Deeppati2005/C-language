#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int info;
    struct node *next;
} node;
node *top = NULL;
void push(int n)
{
    node *tmp = (node *)malloc(sizeof(node));
    tmp->info = n;
    tmp->next = NULL;
    if (top == NULL)
    {
        top = tmp;
    }
    else
    {
        tmp->next = top;
        top = tmp;
    }
}
int pop()
{
    if (top == NULL)
    {
        printf("\n Stack is empty");
        return 0;
    }
    int n = top->info;
    node *tmp = top;
    top = top->next;
    free(tmp);
    return n;
}
void show()
{
    node *i = top;
    printf("\n list is:");
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
        printf("\n1...push \n2...pop \n0...exit");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("\n Enter the no:");
            scanf("%d", &n);
            push(n);
            show();
            break;
        case 2:
            n = pop();
            if (n != 0)
            {
                printf("\n popped item=%d", n);
                show();
            }
            break;
        }
    }
}
