#include<iostream>
using namespace std;

void amplify(int number);

main()
{
int number;
cout<<"Enter the number to amplify: ";
cin>>number;
if(number<=0)
  {
    cout<<"Enter Positive Number.";
    return 0;
  }

amplify(number);
}

void amplify(int number)
{
for(int i=1; i<=number; i++)
   {
     if(i%4==0)
       {
         int amplified=i*10;
         cout<<amplified<<", ";
         continue;
       }
     cout<<i<<", ";
   }
}