#include <iostream>
#include <iomanip>
using namespace std;

int main() {
 int x;
 float y;
 cin>>x>>y;
 if(x%5==0 && x<=y-0.5) y=y-x-0.50;
 cout<<fixed<<setprecision(2)<<y;
 return 0;
}