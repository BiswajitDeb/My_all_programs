#include<stdio.h>
int main()
{
    int a,b;
    char op;
    printf("Enter the first number : ");
    scanf("%d",&a);
    printf("Enter the second number : ");
    scanf("%d",&b);
    getchar();
    printf("Enter the operand : + , -, * , / , %% : ");
    scanf("%c",&op);

    switch(op)
    {
        case '+' : printf("%d + %d = %d",a,b,(a+b)); break;
        case '-' : printf("%d - %d = %d",a,b,(a-b)); break;
        case '*' : printf("%d * %d = %d",a,b,(a*b)); break;
        case '%' : printf("%d %% %d = %d",a,b,(a%b)); break;
        case '/' : if(b==0){printf("Divisor can't be 0");} else {printf("%d / %d = %d",a,b,(a/b));} break;
    }
    return 0;
}   
