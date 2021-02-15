#include <iostream>
using namespace std;

int main()
{
   int input[5];
   cout << "Enter elements: "<<endl;
   for(int i = 0; i < 5; i++)
      cin >> input[i];

   cout << "You entered: ";
   for(int i = 0; i < 5; i++)
      cout << endl << *(input + i);

   return 0;
}