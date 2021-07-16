// 2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37, 41, 43, 47,

#include <stdio.h>
int isprime(int a)
{
    int count =0;
    for(int i = 1;i<=a;i++)
    {
        if(a%i ==0)   {count ++;}
        else          {continue;}
    }
    if(count == 2)    {return a;}
    else              {return 0;}
}

int main()
{
    int n,c=2;
    printf("Enter the term you want to print : ");
    scanf("%d",&n);
    int m=n;
    while(1==1)
    {
        if(n!=0)
            {
                if(c == isprime(c))   {n --;}
                c++;
            }
        else    {c--;break;}

    }
    printf("The %dth prime number is %d",m,c);
return 0;
}

// #include<stdio.h>
// int main()
// {   int n,count=1,i,j;
//     printf("Enter the value of n : ");
//     scanf("%d",&n);

//     do
//     {
//         for(i=2;i<=(3*n);i++)
//             for(j=2;j<=(3*n);j++)
//                 if(i%j==0)  
//                 {
//                     count++;
//                 }
//     } while (count<=n);

//     while(count==n)   {printf("The nth prime number is : %d",i);}

//     return 0;
// }