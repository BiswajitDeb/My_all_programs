#include <stdio.h>
int main()
{    
    char sex, health, place;
    int age;

    printf("Enter the Age of the person:\n");
    scanf("%d", &age);
    printf("Enter the Health Condition of the Person <e:Excellent or P:Poor> :\n");
    scanf("%c\n", &health);
    printf("Enter the Place where the Person lives <c:City or V:Village>:\n");
    scanf("%c\n", &place);
    printf("Enter the sex of the Person <m:Male or F:Female>:\n");
    scanf("%c\n",&sex);
printf("\n%d %c %c %c",age,health,place,sex);
    //if(age >=25 && age <=30 && health=='e' && place=='c' && sex=='m')
    //    {printf("premium 4 Rs per thousand and policy amount cannot exceed 2 lakhs.");}
    //else {printf("Whatever");};
    return 0;
}