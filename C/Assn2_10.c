#include <stdio.h>
int main() 
{
    int a,i,m[10]={0,0,0,0,0,0,0,0};
    printf("Enter amount of money:");
    scanf("%d",&a);
    int arr[8]={500, 100, 50, 20, 10, 5, 2, 1};
    for(i=0;i<8;i++)
    {
    	int sum=0;
        while(a>=arr[i])
        {
			m[i]=sum+1;
			sum+=1;
            a=a-arr[i];
        }
    }
     printf("You will get %d note(s) of Rs500 \n %d note(s) of Rs100 \n %d note(s) of Rs50 \n %d note(s) of Rs20 \n %d note(s) of Rs10 \n %d note(s) of Rs5 \n %d coiin(s) of Rs2 \n %d coin(s) of Rs1",m[0],m[1],m[2],m[3],m[4],m[5],m[6],m[7]);
    
    return 0;
}