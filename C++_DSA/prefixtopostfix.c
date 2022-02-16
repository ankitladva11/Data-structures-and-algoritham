#include <stdio.h>
#include <string.h>
char stack[30];
int ToS = -1;
void push(char c)
{
    stack[++ToS] = c;
}
char pop()
{
    if (ToS == -1)
        return -1;
    else
        return stack[ToS--];
}
int precedence(char c)
{
    if (c == '(')
        return 0;
    if (c == '+' || c == '-')
        return 1;
    if (c == '*' || c == '/')
        return 2;
}
char *infixtopostfix(char *infixx)
{
    char  *ptr, stackElement, postfix[30];
    ptr = infixx;
    int index = 0;
    while (*ptr != '\0')
    {
        if (*ptr == '(')
            push(*ptr);
        else if (*ptr == ')')
        {
            while((stackElement = pop()) != '(')
            {
                printf("%c", stackElement);
                postfix[index++] = stackElement;
            }
        }
        else if (*ptr == '+' || *ptr == '-' || *ptr == '*' || *ptr == '/')
        {
            while (precedence(stack[ToS]) >= precedence(*ptr))
            {
                postfix[index] = pop();
                printf("%c", postfix[index++]);
            }
            push(*ptr);
        }
        else
        {
            postfix[index] = *ptr;
            printf("%c", postfix[index++]);
        }
        ptr++;
    }
    while (ToS != -1)
    {
        postfix[index] = pop();
        printf("%c", postfix[index++]);
    }
    postfix[index] = 0;
    return ptr;
}
int main()
{
    //CONVERSION
    char infix[30], *ptr, stackElement, postfix[30];
    int index = 0;
    printf("Enter the Infix expression : ");
    scanf("%s", infix);
    ptr = infix;
    printf("The Postfix expression is : ");
    postfix[0]=infixtopostfix(ptr);

    // EVALUATION
    int operand1, operand2;
    for(int i=0;i<strlen(postfix);i++)
    {
        if(postfix[i]=='+' || postfix[i]=='-' || postfix[i]=='*' || postfix[i]=='/')
        {
            operand1=pop();
            operand2=pop();
            switch (postfix[i])
            {
            case '+': push(operand2+operand1);
            break;
            case '-': push(operand2-operand1);
            break;
            case '*': push(operand2*operand1);
            break;
            case '/': push(operand2/operand1);
            break;
            }
        }
        else
        push(postfix[i]-'0');
    }
    printf("\nAnswer is %d",stack[ToS]);
    return 0;
}