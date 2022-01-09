#include <stdio.h>
#include <conio.h>
struct polynomial
{
    int degree;
    int coffecient;
};

int main()
{
    struct polynomial x[10], y[10], result[100];
    int n, m, count = -1;
    int i, j;
    printf("\nEnter Number Of Terms Of the 1st polynomial : ");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter Degree : ");
        scanf("%d", &x[i].degree);
        printf("Enter coffecient : ");
        scanf("%d", &x[i].coffecient);
    }
    printf("\nEnter Number Of Terms Of the 2nd polynomial : ");
    scanf("%d", &m);
    for (i = 0; i < m; i++)
    {
        printf("Enter Degree : ");
        scanf("%d", &y[i].degree);
        printf("Enter coffecient : ");
        scanf("%d", &y[i].coffecient);
    } 

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            result[++count].degree = x[i].degree + y[j].degree;
            result[count].coffecient = x[i].coffecient * y[j].coffecient;
        }
    }
    printf("\nThe product Of Two polynomial is : ");
    for (i = 0; i <= count; i++)
    {
        if (result[i].degree == 0)
            printf("%d ", result[i].coffecient);
        else if (result[i].degree == 1)
            printf("%dx ", result[i].coffecient);
        else
        {
            printf("%dx^%d ", result[i].coffecient, result[i].degree);
        }
        if (i != count)
            printf("+ ");
    }
    return 0;
}
