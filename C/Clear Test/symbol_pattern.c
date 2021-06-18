#include<stdio.h>
 
int main(){
    int row;
    printf("Enter no. of rows: ");
    scanf("%d", &row);
    for(int i=1; i<=row; i++){
          for(int j=1; j<=5; j++){
                if(i==1||i==row){
                      printf("*");
                }
                else if(i>1&&i<row){
                      if(j>1&&j<5){
                            if(i%2==0){
                                  if(j==2||j==4){
                                        printf("!");
                                  }
                                  else{
                                        printf(" ");
                                  }
                            }      
                            else if(i%2!=0){
                                  if(j==3){
                                        printf("!");
                                  }
                                  else{
                                        printf(" ");
                                  }
                            }        
                      }
                      else 
                           printf("*");
                }
          }
      printf("\n");
    }
 
return 0;
}