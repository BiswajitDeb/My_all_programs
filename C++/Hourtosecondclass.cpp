
#include<iostream>
#include<iomanip>
using namespace std;

class time
{
    private:
      int seconds;
      int hh,mm,ss;
    public:
       void gettime(void);
       void converttoseconds(void);
       void displaytime(void);   
};

void time::gettime(void)
{
    cout<<"Enter time:"<<endl;
    cout<<"Hours:";
      cin>>hh;
    cout<<"Minutes:";
      cin>>mm;
    cout<<"Seconds:";
      cin>>ss; 
}

void time::converttoseconds(void)
{
    seconds = hh*3600+ mm*60 + ss;
}

void time::displaytime(void)
{
cout<<"the time is ="<< setw(2) << setfill('0')<<hh<<":";
                     << setw(2) << setfill('0')<<mm<<":";
                     << setw(2) << setfill('0')<<mm<<":";
cout<< "Time in seconds:" <<seconds;
}

int main()
{
    time t;

    t.gettime();
    t.converttoseconds();
    t.displaytime();

    return 0;

}