#include <stdio.h>
#include<stdbool.h>

int main()
{
    int n,i;
    bool flag;

    printf("Enter the number : ");
    scanf("%d",&n);

    for (i=2;i<n;i++)
    {
        if(n%i==0)
        {
            flag=false;

            break;
        }
    }
    if(i==n)
        {
            flag=true;
        }
    
if (flag==true)
{
    printf("The number %d is prime",n);
}
else if(flag==false)
{
    printf("The number %d is not prime",n);
}
return 0;
}       
