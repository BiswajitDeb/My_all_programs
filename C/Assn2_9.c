#include <stdio.h>
 
int main()
{
  
    float F,C;
    int choice;
 
    printf("\n1: Convert temperature from Fahrenheit to Celsius."); 
    printf("\n2: Convert temperature from Celsius to Fahrenheit.");
    printf("\nEnter your choice (1,2): ");
    scanf("%d",&choice);
 
    if(choice ==1){
        printf("\nEnter temperature in Fahrenheit: ");
        scanf("%f",&F);
        C= (F - 32) / 1.8;
        printf("Temperature in Celsius: %.2f",C);
    }
    else if(choice==2){
        printf("\nEnter temperature in Celsius: ");
        scanf("%f",&C);
        F= (C*1.8)+32;
        printf("Temperature in Fahrenheit: %.2f",F);
    }
    else{
        printf("\nInvalid Choice !!!");
    }
    return 0;
}