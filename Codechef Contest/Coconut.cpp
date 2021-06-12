#include<iostream>
using namespace std;
int main()
{
int n,xa,xb,Xa,Xb,coco;
cin>>n;
while(n--)
    {
        cin>>xa>>xb>>Xa>>Xb;
        coco=Xa/xa + Xb/xb;
        cout<<coco<<endl;
    }
    return 0;
}