#include<stdio.h>
#include<math.h>
int main()
{
    float A,B,C,S,Area;
    printf("Enter the lengths of the three sides of the triangle : \n");
    scanf("%f %f %f", &A , &B , &C);
    S = (A+B+C)/2; 
    Area = sqrt(S*(S-A)*(S-B)*(S-C)); 
    printf("The area of the triangle is : %f",Area);
    return 0;
}