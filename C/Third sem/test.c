#include<stdio.h>    
int main()    
{    
    int n1=0,n2=1,n3,number,i=2;    
    printf("Enter the Ending term : ");    
    scanf("%d",&number);    
    if(number==0)   {printf("0");}
    if(number==1)   {printf("0 1");} 
    while(i<=number)
    {    
        ++i;
        n3=n1+n2;
        //if(n3>=number)    {break;}    
        n1=n2;    
        n2=n3;
        printf(" %d",n3);    
    }  
  return 0;  
}    
