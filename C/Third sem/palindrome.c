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
    //printf("The reversed Number is : %d",reverse);
    if(num==reverse)
    {
        printf("The number is palindrome ");
    }
    else 
    {
        printf("Not a palindrome");
    }
	return 0; 
} 