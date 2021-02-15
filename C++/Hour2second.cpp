#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
int a,b,c;

cout<<"Hours:";
cin>>a;
if (a>24)
cout<<"Hours can't be more than 24 try again\n";
cout<<endl;

cout<<"Minutes:";
cin>>b;
if(b>=60)
   a=a+b/60;
   b=b%60;
cout<<endl;

cout<<"Seconds:";
cin>>c;
if(c>=60)
   b=b+c/60;
   c=c%60;
cout<<endl;

cout<<"Your Time is :  "<< setw(2) << setfill('0')<<a<<":"<< setw(2) << setfill('0')<<b<<":"<< setw(2) << setfill('0')<<c<<endl;
cout << "Time in seconds:"<<a*3600+b*60+c;
return 0;
}
