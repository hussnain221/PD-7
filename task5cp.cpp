#include<iostream>
using namespace std;

bool isPrime(int number);

main()
{
int number;
cout<<"Enter Number: ";
cin>>number;
cout<<isPrime(number);
}

bool isPrime(int number)
{
for(int i=2; i<number; i++)
  {
    if(number%i==0){
      return false;
      }
  }
 return true;
}