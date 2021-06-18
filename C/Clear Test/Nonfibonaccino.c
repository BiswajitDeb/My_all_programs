#include<stdio.h>
int main()
{
	int n,i=0,j=1,k,x,y;
	printf("Enter the number upto which you want to print the non-fibonacci serires :");
	scanf("%d",&n);
	for(k=0;k<=n;k++)
	{
		k=i+j;	i=j;	j=k;	y=i+j;
		
		for(x=k+1;x<y;x++)
			{
				if(x<=n)
				printf("%d ",x);
				else
				break;
			}	
	}
}