#include<iostream>
#include <bits/stdc++.h>
using namespace std;

class inputs
{
    private:
        int a,b;
        int n,m; 
    public:
    void fora(void);
    void forb(void);
    void lssnine(void);
    void grtrnine(void);

};

void inputs::fora(void)
{
    if (a<=9)    a=n;
    if (a>9)     a=m;
}

void inputs::forb(void)
{
    if (b<=9)    b=n;
    if (b>9)     b=m;
}


void inputs::lssnine(void)
{
   
    if (n==1)
        cout<<"one"<<endl;
    if(n==2)
        cout<<"two"<<endl;
    if(n==3)
        cout<<"three"<<endl;
    if(n==4)
        cout<<"four"<<endl;
    if(n==5)
        cout<<("five")<<endl;
    if(n==6)
        cout<<("six")<<endl;
    if(n==7)
        cout<<("seven")<<endl;
    if(n==8)
        cout<<("eight")<<endl;
    if(n==9)
        cout<<("nine")<<endl;
    
}

void inputs::grtrnine(void)
{
    if (m%2==0)
        cout<<"even";
    else 
    cout<<"odd";
}

int main()
{
    Main M;

    M.fora();
    M.forb();
    M.lssnine();
    M.grtrnine();
    
    return 0;
}