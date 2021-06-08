#include<stdio.h>
int main()
{
char condition,city,sex;
int age;
printf("\nChoose A OR B\nYour current health condition:\n\tA.Excellent\n\tB.Poor\n");
scanf("%c",&condition);
printf("\nEnter your age :");
scanf("%d",&age);
printf("\nChoose where do you live A or B\nYou're currently live in:\n\tA.City\n\tB.Village\n");
scanf("%c\n",&city);
printf("\nChoose your sex M or F:\n\tM.Male\n\tF.Female\n");
scanf("%c\n",&sex);

if(condition=='A'|| condition=='a' && age>=25 && age<=35 && city=='A' || city=='a' && sex=='M'||sex=='m')
    {printf("You should be insured and the premium is Rs. 4 per thousand and policy can't exceed Rs. 2 lakh");}
else if(condition=='A'|| condition=='a' && age>=25 && age<=35 && city=='A' || city=='a' && sex=='F'||sex=='f')
    {printf("You should be insured and the premium is Rs. 3 per thousand and policy can't exceed Rs. 1 lakh");}
else if(condition=='B' || condition=='b' && age>=25 && age<=35 && city=='B' || city=='b' && sex=='M'||sex=='m')
    {printf("You should be insured and the premium is Rs. 6 per thousand and policy can't exceed Rs. 10 thousand");}
else {printf("you're not insured");}
return 0;
}