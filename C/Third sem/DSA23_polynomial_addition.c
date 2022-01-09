#include<stdio.h>
#include <conio.h>

int main()
{
    int a[10], b[10], sum[10], m, n, k, k1, i, j, x;
    printf("\nEnter the number of terms of the 1st polynomial : ");
    scanf("%d", &m);
    printf("\nEnter the degrees and coefficients (order wise) : ");
    for (i = 0; i < 2 * m; i++)
        scanf("%d", &a[i]);
    printf("\nThe First polynomial is : ");
    k1 = 0;
    if (a[k1 + 1] == 1)
        printf("x^%d", a[k1]);
    else
        printf("%dx^%d", a[k1 + 1], a[k1]);
    k1 += 2;
    while (k1 < i)
    {
        printf(" + %dx^%d", a[k1 + 1], a[k1]);
        k1 += 2;
    }
    printf("\n\nEnter the number of terms of the 2nd polynomial : ");
    scanf("%d", &n);
    printf("\nEnter the degrees and coefficients (order wise) : ");
    for (j = 0; j < 2 * n; j++)
        scanf("%d", &b[j]);
    printf("\nThe Second polynomial is : ");
    k1 = 0;
    if (b[k1 + 1] == 1)
        printf("x^%d", b[k1]);
    else
        printf("%dx^%d", b[k1 + 1], b[k1]);
    k1 += 2;
    while (k1 < 2 * n)
    {
        printf(" + %dx^%d", b[k1 + 1], b[k1]);
        k1 += 2;
    }
    i = 0;
    j = 0;
    k = 0;
    while (m > 0 && n > 0)
    {
        if (a[i] == b[j])
        {
            sum[k + 1] = a[i + 1] + b[j + 1];
            sum[k] = a[i];
            m--;
            n--;
            i += 2;
            j += 2;
        }
        else if (a[i] > b[j])
        {
            sum[k + 1] = a[i + 1];
            sum[k] = a[i];
            m--;
            i += 2;
        }
        else
        {
            sum[k + 1] = b[j + 1];
            sum[k] = b[j];
            n--;
            j += 2;
        }
        k += 2;
    }
    while (m > 0)
    {
        sum[k + 1] = a[i + 1];
        sum[k] = a[i];
        k += 2;
        i += 2;
        m--;
    }
    while (n > 0)
    {
        sum[k + 1] = b[j + 1];
        sum[k] = b[j];
        k += 2;
        j += 2;
        n--;
    }
    printf("\n\nThe Sum of the two polynomials is : ");
    k1 = 0;
    if (sum[k1 + 1] == 1)
        printf("x^%d", sum[k1]);
    else
        printf("%dx^%d", sum[k1 + 1], sum[k1]);
    k1 += 2;
    while (k1 < k)
    {
        if (sum[k1 + 1] == 1)
            printf(" + x^%d", sum[k1]);
        else
            printf(" + %dx^%d", sum[k1 + 1], sum[k1]);
        k1 += 2;
    }
    return 0;
}