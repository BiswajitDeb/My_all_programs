#include<stdio.h>
int main()
{
    int n,a,b;
    printf("Enter two numbers:\n");
    scanf("%d%d",&a,&b);
    printf("Enter your choice : \n1.Addition \t2.Substraction\n");
    scanf("%d",&n);
    
switch(n)
    {
        case 1 : printf ("%d",a+b);break;
        case 2 : printf ("%d",a-b);break;
        default : printf ("invalid");break;
    }
    return 0;
}