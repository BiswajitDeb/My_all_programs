#include<stdio.h>
#define MAX 99999

void fibonacci(int n)
{
    int a = 0, b = 1, next;
    for (int i = 1; i<=n; i++)
    {
        next = a + b;
        a = b;
        b = next;
    }
    printf("%d", a);
}

void prime(int n)
{
    int i, j, flag, count =0;
    for (i=2; i<=MAX; i++)
    {
        flag = 0;
        for (j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                flag = 1;
                break;
            }
        }

        if (flag == 0)
        {
            if(++count == n)
            {
                printf("%d", i);
                break;
            }
        }
    }
}
int main(){
    int n;
    scanf("%d", &n);
    if(n%2 == 1) 
        fibonacci (n/2 + 1);
    else 
        prime(n/2);

    return 0;
}