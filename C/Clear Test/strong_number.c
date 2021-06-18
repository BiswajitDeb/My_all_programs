#include<stdio.h>

int fact(int a)     //  factorial 
{int mul=1;
    for(a;a>0;a--)  {mul=mul*a;}
    return mul;
}


int main()
{
int N,n,sum=0;
printf("Enter a number : ");
scanf("%d",&N);
n=N;
//printf("%d",n);
while(n>0)
     {
         sum=sum+fact(n%10);
         n=n/10;
         //printf("%d\n",sum);
         
     }
     //printf("%d",sum+n);
 if (N==sum)     {printf("Strong number");}
 else            {printf("Not a strong number ");}
return 0;
}