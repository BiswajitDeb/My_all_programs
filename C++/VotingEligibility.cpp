#include<iostream>
using namespace std;

int main()
{
    int age,comeback;
    cout<<"Enter your age:"<<endl;
    cin>>age;
    if (age>=18 )
    cout<<"You're eligible for voting";
    if(age<0)
    cout<<"Invalid input, age can't be a negative value";
    else cout<<"You're not eligible for voting"<<endl;
    comeback=18-age;
    cout<<"comeback after "<<comeback<<" years";
    
    return 0;
}