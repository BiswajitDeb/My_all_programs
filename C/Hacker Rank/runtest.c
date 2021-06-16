#include<stdio.h>
#include<math.h>

int main()
{
	double a,b,c,e,x1,x2;
	
	printf("Enter three constants of a quadractic equation to calculate it's roots");
	scanf("%lf",&a,&b,&c);
	
	if(a!=0)
	{
		e=b*b-(4*a*c);
		x1=(-b+sqrt(b*b-4*a*c))/2;
		x2=(-b-sqrt(b*b-4*a*c))/2;
		
		printf("\n The roots of quadratic equations are %.2lf and %.2lf",x1,x2);
	}
	else
	{ 
	  printf("\n ERROR PLEASE TRY AGAIN");
	}
	
	return 0;
}