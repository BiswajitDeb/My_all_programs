#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n ;
    
    cout<<"Enter a number :"<<endl;
    cin>>n;

    for (int i=2 ; i<sqrt(n) ; i++)
    {
    if(n%i==0)
        cout<<"Non Prime number"<<endl; //will print several times for several multiples like 1 , itself and other numbers
       // use bool function to satisfy the condition and then cout for bool==1
    else 
        cout<<"Prime Number"<<endl;
        
    }
return 0;
}