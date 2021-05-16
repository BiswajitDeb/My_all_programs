#include<stdio.h>
#include<math.h>

int main()
{
    float r,parameter, area , pi= 3.141592653589793238;
    scanf("%f" , &r);
    area= pi*r*r;
    parameter=2*pi*r;
    printf("Area of the circle is : %d \nParameter of the circle is : %d" , area ,parameter );
    return 0;
}
