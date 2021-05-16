#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,S,Area;
    printf("Enter the lengths of the three sides of the triangle : \n");
    scanf("%f %f %f", &A , &B , &C);
    S = (A+B+C)/2; //(5+6+7)/2=9
    Area = sqrt(S*(S-A)*(S-B)*(S-C)); // sqrt(9*(9-5)*(9-6)*(9-7))=
    printf("%f",Area);
    return 0;
}