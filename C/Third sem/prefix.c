#include<stdio.h>
#include<math.h>
#include<string.h>
#define MAX 30
#define OPERAND 10
#define OPERATOR 20
typedef struct prefix
{
    int top;
    int stack[MAX];
}stack;


void init(stack*);
void push(stack*,int);
int pop(stack*);
void evaluation(stack*,char,int,int);
int char_input(char);

int main()
{
    char pre[MAX];
    int num1,num2,item,l,i,pr;
    stack stk;
    fflush(stdin);
    init(&stk);
    printf(" Enter a prefix expression : ");
    gets(pre);
    l=strlen(pre);
    for(i=l-1;i>=0;i--)
{
if(pre[i]==' ' || pre[i]=='\0')
    continue;
switch(char_input(pre[i]))
{
    case OPERAND : item=pre[i]-'0';
    push(&stk,item);
    break;
    case OPERATOR : num1=pop(&stk);
    num2=pop(&stk);
    evaluation(&stk,pre[i],num1,num2);
}
}
printf("\n");
printf("The value is:%d",stk.stack[0]);
return 0;
}

void init(stack *st )
{
    st->top=-1;
}

void push(stack *st,int num)
{
    st->top++;
    st->stack[st->top]=num;
}

int pop(stack *st)
{
    int num;
    num=st->stack[st->top];
    st->top--;
    return num;
}

void evaluation(stack *st,char op,int num1,int num2)
{
    int res;
    switch(op)
    {
    case '+': res=num1+num2;
        break;
    case '-': res=num1-num2;
        break;
    case '*': res=num1*num2;
        break;
    case '/': res=num1/num2;
        break;
    case '%': res=num1%num2;
        break;
    case '$': res=pow(num1,num2);
        break;
}
push(st,res);
}
int char_input(char c)
{
switch(c)
{
    case '+':
    case '-':
    case '*':
    case '/':
    case '$':
    case '%': return OPERATOR;
    default : return OPERAND;
}
}