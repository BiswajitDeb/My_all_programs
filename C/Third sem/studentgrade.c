#include<stdio.h>
int main()
{
    int marks;
    printf("Enter your marks percentage :");
    scanf("%d",&marks);
    if(marks<0 || marks>100) {printf("Invalid marks ");return 0;}
    marks = marks/10;

    switch(marks)
    {
        case 10: case 9: printf("Your grade is : O");   break;
        case 8: printf("Your grade is : A");            break;
        case 7: printf("Your grade is : B");            break;
        case 6: printf("Your grade is : C");            break;
        case 5: printf("Your grade is : D");            break;
        default: printf("Your grade is : Fail");        break;

    }
    return 0;
}