#include <stdio.h>
int main()

{
    int rows, col = 1, spc, i, j,n;
    printf("Enter the number of rows : ");
    scanf("%d",&n);

    for (i = 0; i < n; i++)
    {
        for (spc = 1; spc <= n - i; spc++)
            printf("  ");
        for (j = 0; j <= i; j++)
        {
            if (j == 0 || i == 0)
                col = 1;
            else
                col = col * (i - j + 1) / j;
            printf("%4d", col);
        }
        printf("\n");
    }
    return 0;
}