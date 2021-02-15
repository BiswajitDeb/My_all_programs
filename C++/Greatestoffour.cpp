#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d;
    
        cin>>a>>b>>c>>d;

    if (a>b)
        if (a>c)
            if (a>d)
            cout<<a ;// "is the greatest";
            else
            cout<<d; //<< "is the greatest";
        else if (c>d)
        cout<<c; // "is the greatest";
            else 
            cout<<d; // "is the greatest";

    else if(b>c)
            if (b>d)
                cout<<b; // "is the greatest";
            else 
                cout<<d; //"is the greatest";
        else if (c>d)
            cout<<c; //"is the greatest";
        else 
            cout<<d; //"is the greatest";
        
            return 0 ;
            

}