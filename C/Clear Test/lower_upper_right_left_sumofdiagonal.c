#include <stdio.h>
int main()
{
int upsum=0,lwrsum=0,lftsum=0,rghtsum=0,n;
printf("Enter the dimention of the matrix \n\t press n for (n x n) matrix : ");
scanf("%d",&n);
int val=n;
int a[n][n],b[n][n];
printf("Enter the ellements of the matrix :");
for(int i =0;i<n;i++)
    {
        for(int j = 0 ;j<n;j++)     { scanf("%d",&a[i][j]); }
    }

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (i <= j)                {upsum += a[i][j];}
    }
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (i >= j)                {lwrsum += a[i][j];}
    }
}

for (int i = 0; i < n; i++)
{
    for (int j = 0; j < n; j++)
    {
        if (i == j)                {lftsum += a[i][j];}
    }
}

 for (int i = 0; i <n; i++)
{
    for (int j = 0; j <n; j++)
    {
        if (i+j==val)              {rghtsum += a[i][j];}
    }
}

printf("The upper trianguler sum is %d\n",upsum);
printf("The lower trianguler sum is %d\n",lwrsum);
printf("The left diagonal sum is %d\n",lftsum);
printf("The right diagonal sum is %d\n",rghtsum);
return 0;
}