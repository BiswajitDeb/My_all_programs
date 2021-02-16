#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<<"Enter a number"<<endl;
    cin>>x;
for(int i=2; i<=(x-i); i=newprime(i))
 {
     if(isprime(x-i))
     cout<<x <<"=" <<i <<"+" <<(x-i) <<endl;
 }
}
//to check the next prime number 
int nextprime(int n)
{
    do
    n++;
    while(!isprime(n));
    return(n);
}
//to check if the number is prim or not
int isprime(int n)
{
    int i;
    for(i=2;i<n;i++)
    if(n%i==0)
    return(0);
    return(1);
}