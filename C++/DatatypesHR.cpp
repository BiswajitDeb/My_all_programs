#include <iostream>
#include <cstdio>
#include <iomanip>
using namespace std;
int main()
{
    int i;
    long long1;
    long long long2;
    char c;
    float f;
    double d;
    cin>>i;
    cin>>long1;
    cin>>long2;
    cin>>c;
    cin>>f;
    cin>>d;
    cout << setprecision(20) << i<< endl; //setprecision(20) gives corrext value upto 20 decimals
    cout << setprecision(20) << long1<< endl;
    cout << setprecision(20) << long2<< endl;
    cout << setprecision(20) << c<< endl;
    cout << setprecision(20) << f<< endl;
    cout << setprecision(20) << d<< endl;
    return 0;
}