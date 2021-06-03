#include<stdio.h>
#include<math.h>
int len(int a1,int b1,int a2,int b2)
{
    int s;
    s=sqrt(pow((a2-a1),2) + pow((b2-b1),2));
    return s;
}

int main()
{
    int x1,x2,y1,y2,x3,y3,A,B,C;
    printf("Enter the coordinates of the points of the triangle : \n(x1,y1) : ");   scanf("%d %d",&x1,&y1);
    printf("(x2,y2) : ");   scanf("%d %d",&x2,&y2);
    printf("(x3,y3) : ");   scanf("%d %d",&x3,&y3);
    A=len(x1,y1,x2,y2);
    B=len(x2,y2,x3,y3);
    C=len(x1,y1,x3,y3);

    if(A+B>C && B+C>A && A+C>B) {printf("Formation of triangle is possible with the given points.");}
    else                        {printf("Formation of Triangle isn't possible with the given points.");}

    return 0;
}