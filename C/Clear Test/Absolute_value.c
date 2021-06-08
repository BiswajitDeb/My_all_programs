#include <stdio.h>
void absolute(int n)
{
	if (n < 0)      {n = (-1) * n;}
	printf("The absolute value is : %d", n);
}
int main()
{
	int n;
    printf("Enter a number :");
    scanf("%d",&n);

	absolute(n);
	return 0;
}