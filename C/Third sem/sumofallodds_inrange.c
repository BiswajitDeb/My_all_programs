#include<stdio.h>
int main()
{
    int start,end,sum=0;
    printf("Enter the starting range : ");
    scanf("%d",&start);
    printf("Enter the end term : ");
    scanf("%d",&end);
    printf("The odd numbers are :\n");
    for(start;start<=end;start++)
        if(start%2!=0)
            {sum=sum+start; printf("%d\n",start);}          
    printf("Your sum of the odd numbers is : %d",sum);
    return 0;
}