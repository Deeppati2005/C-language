#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
#define size 10
int stk[size];
int top = -1;
void push(int n)
{
    stk[++top] = n;
}
int pop()
{
    return stk[top--];
}
int main()
{
    // +-*/5362^23 => 11
    int a, b, c, i;
    char s[100];
    printf("\n Enter the prefix expression:");
    gets(s);
    for (i = (strlen(s) - 1); i >= 0; i--)
    {
        if (isdigit(s[i]))
        {
            push(s[i] - 48);
        }
        else
        {
            b = pop();
            a = pop();
            switch (s[i])
            {
            case '+':
                c = a + b;
                break;
            case '-':
                c = a - b;
                break;
            case '*':
                c = a * b;
                break;
            case '/':
                c = a / b;
                break;
            case '^':
                c = pow(a, b);
                break;
            case '%':
                c = a % b;
                break;
            }
            push(c);
        }
    }
    printf("\n Result=%d", pop());
}
