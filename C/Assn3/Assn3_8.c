#include <stdio.h>

int main()
{
int MM,YY;
printf("Enter the number of the Month: ");      scanf("%d",&MM);
printf("Enter the Year: ");                     scanf("%d",&YY);
if (YY%400==0 || (YY%4==0 && YY%100!=0))
    {
        switch(MM)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:   printf("There are 31 days in the month");   break;
            case 4: case 6: case 9: case 11:                            printf("There are 30 days in the month");   break;
            case 2:                                                     printf("There are 29 days in the month");   break;
            default:
                printf("Month can't be %c",MM);
        }
    }
else if (!(YY%400==0 || (YY%4==0 && YY%100!=0)))
    {
        switch(MM)
        {
            case 1: case 3: case 5: case 7: case 8: case 10: case 12:   printf("There are 31 days in the month");   break;
            case 4: case 6: case 9: case 11:                            printf("There are 30 days in the month");   break;
            case 2:                                                     printf("There are 28 days in the month");   break;
            default:
                printf("Month can't be %c",MM);
        }
    }
    return 0;
}
