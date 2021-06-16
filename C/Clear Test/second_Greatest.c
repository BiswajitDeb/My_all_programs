#include<stdio.h>
int main()
{int a,b,c;
printf("Enter 3 integers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a<c)  {printf("%d is the 2nd greatest",a);}
    if(b>a && b<c)  {printf("%d is the 2nd greatest",b);}
    if(c>a && c<b)  {printf("%d is the 2nd greatest",c);}
    return 0;
}