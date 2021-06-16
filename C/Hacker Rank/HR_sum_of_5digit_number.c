#include <stdio.h>
int main()
{
   int n, sum = 0, r;

   for (scanf("%d", &n); n != 0; n = n/10) {
      r = n % 10;
      sum = sum + r;
   }

   printf("%d", sum);

   return 0;
}