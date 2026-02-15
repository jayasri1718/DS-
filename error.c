#include <stdio.h>
#include <ctype.h>
char stack[50];
int top = -1;
void push(char x)
{
    stack[++top] = x;
}
char pop()
{
    return stack[top--];
}
int priority(char x)
{
    if (x == '(')
    return 0;
    if (x == '+' || x == '-')
    return 1;
    if (x == '*' || x == '/')
    return 2;
    return 0;
}
int main()
{
    char infix[50], postfix[50];
    int i = 0, k = 0;
    int error = 0;
    char ch;
    printf("Enter Infix Expression: ");
    scanf("%s", infix);
    while ((ch = infix[i++]) != '\0')
    {
        if (isalnum(ch))
        {
            postfix[k++] = ch;
        }
        else if (ch == '(')
        {
            push(ch);
        }
        else if (ch == ')')
        {
            if (top == -1)   // no matching '('
            {
                error = 1;
                break;
            }
            while (top != -1 && stack[top] != '(')
            {
                postfix[k++] = pop();
            }

            if (top == -1)
            {
                error = 1;
                break;
            }
            pop();  
        }
        else
        {
            while (top != -1 && priority(stack[top]) >= priority(ch))
            {
                postfix[k++] = pop();
            }
            push(ch);
        }
    }
    while (top != -1)
    {
        if (stack[top] == '(')
        {
            error = 1;
            break;
        }
        postfix[k++] = pop();
    }
    if (error)
    {
        printf("Error: Parentheses are mismatched\n");
    }
    else
    {
        postfix[k] = '\0';
        printf("Postfix Expression: %s\n", postfix);
    }
    return 0;
}