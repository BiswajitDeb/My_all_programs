#include<stdio.h> 
 
int main() 
{ 
	int num, reverse=0, n, rem; 
 
	printf("Enter a number: "); 
	scanf("%d", &num); 
 
	n = num; 
 
	while(n != 0){ 
        rem = n%10; 
        reverse = reverse*10 + rem; 
        n = n/10; 
	}
    int difference=num-reverse;
    if (difference<0)   {difference = -1*difference;}
	printf("Difference = %d", difference); 
 
	return 0; 
} 