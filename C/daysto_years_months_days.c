#include<stdio.h>
int main()
{
    int input_days, years, months, days;

    printf("Enter the number of days : ");
    scanf("%d", &input_days);
    years = input_days / 365;
    months=(input_days%365)/30;
    days=((input_days)%365)%30;
    
    printf("Years : %d", years);
    printf("\nMonths : %d", months);
    printf("\nDays : %d", days);
    return 0;
}