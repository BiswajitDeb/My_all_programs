#include<stdio.h>
#include<math.h>
int main()
{
    int x1,x2,y1,y2;
    float s;
    printf("Enter the coordiantes of the points sequentially to measure distance in between : \n");
    printf("x1:");
    scanf("%d", &x1);
    printf("y1:");
    scanf("%d", &y1);
    printf("x2:");
    scanf("%d", &x2);
    printf("y2:");
    scanf("%d", &y2);
    s=sqrt(pow((x2-x1),2) + pow((y2-y1),2));
    printf("The distance between the two given points is : %f",s);
    return 0;
}