#include<stdio.h>

int isprime(int n)
{
    if(n == 1)          {return 0;}
    for(int i = 2; i < n; i++)
    {
        if(n % i == 0)  {return 0;}
    }
    return 1;
}

int main()
{   
    int n, m;
    printf("Enter the starting term : ");
    scanf("%d", &n);
    printf("Enter the ending term: ");
    scanf("%d", &m);
    for(int i = n; i < m; i++)
    {
        if(isprime(i) && isprime(i + 2))
        {            
            printf("{%d, %d}\n", i, i + 2); i++;            
        }                
    }    

    return 0;
}

