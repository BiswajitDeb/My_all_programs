#include<stdio.h>

int maxof(int a, int b, int c, int d)
{
    int s;
    if (a>b && a>c && a>d)  {s=a;}//{printf("%d",a);}
    if (b>a && b>c && b>d)  {s=b;}//{printf("%d",b);}
    if (c>a && c>b && c>d)  {s=c;}//{printf("%d",c);}
    if (d>a && d>b && d>c)  {s=d;}//{printf("%d",d);}
    return s;
}

int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    printf("%d",maxof(a,b,c,d));
    return 0;
}