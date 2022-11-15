#include<iostream>
int stack[100];
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
    char expression[100];
    char *e;
    int num1,num2,num3,number;
    printf("Expression: ");
    scanf("%s",expression);
    e = expression;
    while(*e != '\0')
    {
        if(isdigit(*e))
            {
    number = *e - 48;
    push(number);}

        else
        {

        num1 = pop();
        num2 = pop();
        switch(*e)
        {

            case '+':
                {

                num3 = num1 + num2;
                break;
            }
        case '-':
            {
                num3 = num2 - num1;
                break;
            }
            case '*':
                {
                num3 = num1 * num2;
                break;
            }
            case '/':
                {
                num3 = num2 / num1;
                break;
            }
            }
            push(num3);
        }
        e++;
    }
    printf("\nExpression result is %s =  %d\n\n",expression,pop());
    return 0;
}















