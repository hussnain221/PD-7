#include<iostream>
using namespace std;

void upperStar(int rowSize);
void lowerStar(int rowSize);

main()
{
int rowSize;
cout<<"Enter the desired number of rows: ";
cin>>rowSize;
rowSize=rowSize/2;

upperStar(rowSize);
lowerStar(rowSize);

}

void upperStar(int rowSize)
{
for(int i=1; i<=rowSize; i++)
   {
     for(int j=1; j<=rowSize-i; j++)
        {
          cout<<" ";
        }
    
     for(int j=1; j<=i; j++)
        {
          cout<<"*";
        }
      cout<<endl;
   }
}


void lowerStar(int rowSize)
{
for(int i=rowSize-1; i>=1; i--)
   {
     for(int j=1; j<=rowSize-i; j++)
        {
          cout<<" ";
        }
    
     for(int j=1; j<=i; j++)
        {
          cout<<"*";
        }
      cout<<endl;
   }
}