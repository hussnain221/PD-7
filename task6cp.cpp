#include<iostream>
using namespace std;

int primorial(int number);
bool isPrime(int num);

main()
{
int number;
cout<<"Enter The Number: ";
cin>>number;
cout<<primorial(number);
}

bool isPrime(int num)
{
if(num<=1)
  {
    return false;
  }

for(int i=2; i*i<=num; num++)
   {
     if(num%i==0)
       {
         return false;
       }
     return true;
   }
}

int primorial(int number)
{
  int count=0;
int num=2;
int result=1;

while(count<number)
     {
       if(isPrime(num))
         {
           result=result*num;
           count++;
         }
       num++;
     }
return result;
}