#include<stdio.h>    
int main()    
{    
    int n1=0,n2=1,temp,i,number;    
    printf("Enter the Ending term : ");    
    scanf("%d",&number);    
    if(number==0)   {printf("0");}
    if(number==1)   {printf("0 1");} 
    for(i=2;i<number;++i)
    {    
        
        temp=n1+n2;
        if(temp>=number)    {break;}    
        printf(" %d",temp);    
        n1=n2;    
        n2=temp;
    }  
  return 0;  
}    
