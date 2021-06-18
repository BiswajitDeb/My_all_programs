#include<stdio.h>
int main()
{
int condition,city,sex,g,age;
printf("\nChoose 1 OR 2\nYour current health condition:\n\t1.Excellent\n\t2.Poor\n");
scanf(" %d",&condition);
printf("\nEnter your age :");
scanf("%d",&age);
printf("\nChoose where do you live 1 or 2\nYou're currently living in:\n\t1.City\n\t2.Village\n");
//getch();
scanf(" %d",&city);
//city=getchar();
printf("\nChoose your sex 1 or 2:\n\t1.Male\n\t2.Female\n");
scanf(" %d",&sex);
//sex=getchar();
//printf("%d %d %d %d",age,condition,city,sex);

if(condition==1 && age>=25 && age<=35 && city==1 && sex==1)
    {printf("You should be insured and the premium is Rs. 4 per thousand and policy can't exceed Rs. 2 lakh");}
else if(condition==1  && age>=25 && age<=35 && city==1 && sex==2)
    {printf("You should be insured and the premium is Rs. 3 per thousand and policy can't exceed Rs. 1 lakh");}
else if(condition==2  && age>=25 && age<=35 && city==2 && sex==1)
    {printf("You should be insured and the premium is Rs. 6 per thousand and policy can't exceed Rs. 10 thousand");}
else {printf("you're not insured");}
return 0;
}
