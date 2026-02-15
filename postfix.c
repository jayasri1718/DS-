#include <stdio.h>
#include <ctype.h>
int stack[50];
int top = -1;
void push(int x)
{
    stack[++top] = x;
}
int pop()
{
    return stack[top--];
}
int main()
{
    char postfix[50];
    int i = 0;
    int op1, op2, result;
    printf("Enter Postfix Expression: ");
    scanf("%s", postfix);
    while (postfix[i] != '\0')
    {
        if (isdigit(postfix[i]))
        {
            push(postfix[i] - '0'); 
        }
        else
        {
            op2 = pop();
            op1 = pop();
            switch (postfix[i])
            {
                case '+': 
                result = op1 + op2; 
                break;
                case '-': 
                result = op1 - op2; 
                break;
                case '*': 
                result = op1 * op2; 
                break;
                case '/': 
                result = op1 / op2; 
                break;
            }
            push(result);
        }
        i++;
    }
    printf("Final Result: %d\n", pop());
    return 0;
}