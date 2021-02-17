#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
int main()
{
int p , q , swpa , swpb ,n,m;
string a , b;
cin>>a>>b;
p= a.length();
q= b.length();
swpa=swap(a[0], a[p-1]);
swpb=swap(b[0], b[q-1]);
cout<<p<<" "<<q<<endl;  //4 2 
cout<<a+b<<endl;                   //abcdef
cout<<swpa<<" "<<swpb<<endl;
return 0;

}