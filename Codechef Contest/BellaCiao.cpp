#include<iostream>
using namespace std;
int main()
{
long long int s,n,p,q,D,d,t;
cin>>t;

    while(t--)
    {
        cin>>D>>d>>p>>q;
        n=D/d;
        s= (D*p) + d*q*(n*(n-1)/2) + ((D%d)*n*q);
        cout<<s<<endl;
    }
        //count +=(D%d)*(p+n*q);
        //cout<<count<<endl;

    return 0;
}
//if(n%2==0)  {count +=(d*(n/2))*(2*p+(n-1)*q);}
        //else        {count +=d*(n*(p+((n-1)/2)*q));}