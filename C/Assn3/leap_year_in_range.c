#include<stdio.h>
int main()
{
    int year1,year2,year;
    printf("Enter the starting  year : ");
    scanf("%d",&year1);
    printf("Enter the ending  year : ");
    scanf("%d",&year2);
    printf("The leap years in the range %d-%d are Following : \n",year1,year2);
    for (year=year1;year<=year2;year++)
    {
        if (year%400==0 || (year%4==0 && year%100!=0))
            {
                printf("%d \n" , year);
            }
    }
    
    return 0;
}