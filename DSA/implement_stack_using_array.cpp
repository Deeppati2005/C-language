#include <stdio.h>
#include <stdlib.h>
#define size 5
int stk[size];
int top = -1;
void push(int n)
{
    if (top == size - 1)
    {
        printf("\n Stack overflow");
        return;
    }
    top++;
    stk[top] = n;
}
int pop()
{
    if (top == -1)
    {
        printf("\n stack is empty");
        return 0;
    }
    int n = stk[top];
    top--;
    return n;
}
void show()
{
    int i;
    printf("\n stack status :");
    for (i = top; i >= 0; i--)
    {
        printf("%4d", stk[i]);
    }
}
int main()
{
    int ch, n;
    while (1)
    {
        printf("\n 1...push\n 2...pop \n 0...exit");
        scanf("%d", &ch);
        switch (ch)
        {
        case 0:
            exit(0);
            break;
        case 1:
            printf("\n Enter a No:");
            scanf("%d", &n);
            push(n);
            show();
            break;
        case 2:
            n = pop();
            if (n != 0)
            {
                printf("\n Popped item=%d", n);
                show();
            }
            break;
        }
    }
}
