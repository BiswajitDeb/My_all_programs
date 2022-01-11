//Name : Biswajit Deb
//Enrollment ID : 2011200001018
//Registration number : 200010180218

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Stack
{
    int top;
    unsigned capacity;
    int* array;
};

struct Stack* createStack( unsigned capacity )
{
    struct Stack* stack = (struct Stack*) 
           malloc(sizeof(struct Stack));

    if (!stack) 
        return NULL;

    stack->top = -1;
    stack->capacity = capacity;

    stack->array = (int*) malloc(stack->capacity * sizeof(int));

    return stack;
}

int isEmpty(struct Stack* stack)
{
    return stack->top == -1 ;
}

char peek(struct Stack* stack)
{
    return stack->array[stack->top];
}

char pop(struct Stack* stack)
{
    if (!isEmpty(stack))
        return stack->array[stack->top--] ;
    return '$';
}

void push(struct Stack* stack, char op)
{
    stack->array[++stack->top] = op;
}


int isOperand(char ch)
{
    return (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z');
}

int Prec(char ch)
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


int infixToPostfix(char* expression)
{
    int i, k;



    struct Stack* stack = createStack(strlen(expression));
    if(!stack) 
        return -1 ;

    for (i = 0, k = -1; expression[i]; ++i)
    {

        if (isOperand(expression[i]))
            expression[++k] = expression[i];
        
        else if (expression[i] == '(')
            push(stack, expression[i]);
        
        else if (expression[i] == ')')
        {
            while (!isEmpty(stack) && peek(stack) != '(')
                expression[++k] = pop(stack);
            if (!isEmpty(stack) && peek(stack) != '(')
                return -1;       
            else
                pop(stack);
        }
        else
        {
            while (!isEmpty(stack) && 
                 Prec(expression[i]) <= Prec(peek(stack)))
                expression[++k] = pop(stack);
            push(stack, expression[i]);
        }

    }


    while (!isEmpty(stack))
        expression[++k] = pop(stack );

    expression[++k] = '\0';
    printf("The Postfix notation of the given infix expression is : ");
    printf( "%s", expression );
}

int main()
{
    char expression[20];
    printf("Enter an Infix expression : ");
    gets(expression);
    infixToPostfix(expression);
    return 0;
}