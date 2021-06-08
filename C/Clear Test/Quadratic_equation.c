#include <stdio.h>
#include <math.h>
int main() {
    double a, b, c, disc, root1, root2, real, img;
    printf("Enter coefficient of x^2 : ");  scanf("%lf", &a);
    printf("Enter coefficient of x : ");    scanf("%lf", &b);
    printf("Enter the constant : ");        scanf("%lf", &c);

    disc = (b*b)-(4*a*c);

    if (disc>0)
    {
        root1 = (-b+sqrt(disc))/(2*a);
        root2 = (-b-sqrt(disc))/(2*a);
        printf("\nroot1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (disc==0)
    {
        root1=root2= -b/(2*a);
        printf("\nroot1 = root2 = %.2lf;", root1);
    }
    else
    {
        real = -b/(2 * a);
        img = sqrt(-disc)/(2 * a);
        printf("\nroot1 = %.2lf + %.2lfi\nroot2 = %.2f - %.2fi", real, img, real, img);
    }
  return 0;
} 
