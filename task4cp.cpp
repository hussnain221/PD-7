#include<iostream>
using namespace std;

int triangle(int number);

main()
{
int number;
cout<<"Enter the number of triangle: ";
cin>>number;
cout<<"Dots in the triangle: "<<triangle(number);
}

int triangle(int number)
{
int sum;
for(int row=1; row<=number; row++)
   {
     sum=sum+row;
   }
return sum;
}