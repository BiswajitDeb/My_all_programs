#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int t,n,m,r;
    //double r;
    cin>>t;
    for (int i=1;i<=t;i++)
        {
            cin>>m>>n;
            r = (pow(2,m)%1000000007)-1;
            cout<<pow(r,n)%1000000007;
        }
        return 0;
}