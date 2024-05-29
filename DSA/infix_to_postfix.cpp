#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define size 100

char stk[size];
int top = -1;

void push(char ch)
{
    stk[++top] = ch;
}

char pop()
{
    return stk[top--];
}

int precedence(char ch)
{
    switch (ch)
    {
    case '+':
    case '-':
        return 1;
    case '*':
    case '/':
        return 2;
    case '^':
        return 3;
    }
    return -1;
}

void infixToPostfix(char infix[], char postfix[])
{
    int i, j = 0;

    for (i = 0; infix[i]; i++)
    {
        if (isalnum(infix[i]))
        {
            postfix[j++] = infix[i];
        }
        else if (infix[i] == '(')
        {
            push('(');
        }
        else if (infix[i] == ')')
        {
            while (top >= 0 && stk[top] != '(')
            {
                postfix[j++] = pop();
            }
            pop(); // Remove '(' from stack
        }
        else
        {
            while (top >= 0 && precedence(infix[i]) <= precedence(stk[top]))
            {
                postfix[j++] = pop();
            }
            push(infix[i]);
        }
    }

    while (top >= 0)
    {
        postfix[j++] = pop();
    }

    postfix[j] = '\0';
}

int main()
{
    char infix[] = "a+b*(c^d-e)^(f+g*h)-i";
    char postfix[size];

    infixToPostfix(infix, postfix);

    printf("Infix Expression: %s\n", infix);
    printf("Postfix Expression: %s\n", postfix);

    return 0;
}
