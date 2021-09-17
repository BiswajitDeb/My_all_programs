#include<stdio.h>
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    //if(n<0) {n=n*-1;}
    if(n==1 || n==0)    {printf("Neither prime nor composite"); return 0;}
    if(n==2)            {printf("prime");return 0;}

    for(int i=2;i<=n/2;i++)
        {
            if(n%i==0)
                {printf("Not prime");   break;}
            else {printf("prime");  break;}
                
            }
return 0;
}