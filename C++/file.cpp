#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("ITEM");
    cout<<"Enter item name :";
    char name[30];
    cin>>name;
    out<<name<<"\n";
    cout<<"Enter item cost :";
    float cost;
    cin>>cost;
    out<<cost<<"\n";
    out.close();
}
