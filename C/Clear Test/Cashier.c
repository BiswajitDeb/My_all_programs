#include<stdio.h>
int main()
{
	int n;
	printf("Please enter the amount of money you want to withdraw : ");
	scanf("%d",&n);
	printf("\n\nNumber of notes of Rs. 100  :  %d", n/100);
	printf("\n\nNumber of notes of Rs. 50   :  %d", (n%100)/50);
	printf("\n\nNumber of notes of Rs. 10   :  %d", (((n%100)%50)/10));
	printf("\n\nAmount still remaining Rs. :  %d", (((n%100)%50)%10));
	return 0;
}