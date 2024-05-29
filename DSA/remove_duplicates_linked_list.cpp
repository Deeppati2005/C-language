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
void del_dup()
{
    if (start == NULL)
    {
        return;
    }
    node *current = start;
    while (current != NULL)
    {
        node *newnode = current;
        while (newnode->next != NULL)
        {
            if (newnode->next->info == current->info)
            {
                node *todelete = newnode->next;
                newnode->next = todelete->next;
                free(todelete);
            }
            else
            {
                newnode = newnode->next;
            }
        }
        current = current->next;
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
    printf("\n");
}
int main()
{
    int n;
    char ans;
    do
    {
        printf("\n Enter a value: ");
        scanf("%d", &n);
        create(n);
        fflush(stdin);
        printf("\n Press 'y' to continue:");
        scanf(" %c", &ans);
    } while (ans == 'y');
    printf("Original list: ");
    show();
    printf("\n List after removing duplicates: ");
    del_dup();
    show();
}
