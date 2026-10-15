#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

float stack[MAX];
int top = -1;

void push(float value)
{
    if (top == MAX - 1)
    {
        printf("Error: Stack Overflow\n");
        exit(1);
    }

    stack[++top] = value;
}

float pop()
{
    if (top == -1)
    {
        printf("Error: Stack Underflow\n");
        exit(1);
    }

    return stack[top--];
}

int main()
{
    char exp[MAX];
    int i;
    float a, b, result;

    printf("Enter postfix expression: ");
    scanf("%99s", exp);

    for (i = 0; exp[i] != '\0'; i++)
    {
        if (isdigit((unsigned char)exp[i]))
        {
            push(exp[i] - '0');
        }
        else
        {
            b = pop();
            a = pop();

            switch (exp[i])
            {
                case '+':
                    result = a + b;
                    break;

                case '-':
                    result = a - b;
                    break;

                case '*':
                    result = a * b;
                    break;

                case '/':
                    if (b == 0)
                    {
                        printf("Error: Division by zero\n");
                        return 1;
                    }

                    result = a / b;
                    break;

                default:
                    printf("Error: Invalid operator\n");
                    return 1;
            }

            push(result);
        }
    }

    if (top != 0)
    {
        printf("Error: Invalid postfix expression\n");
        return 1;
    }

    printf("Result: %.6f\n", pop());

    return 0;
}
