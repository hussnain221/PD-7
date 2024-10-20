#include<iostream>
#include<iomanip>
using namespace std;

main()
{
int count;
float tonnage;
float bus=0;
float truck=0;
float train=0;
float totalTonnage;
float averageCost;
cout<<"Enter the count of cargo for transportation: ";
cin>>count;

for(int i=1; i<=count; i++)
   {
     cout<<"Enter the tonnage of cargo "<<i<<": ";
     cin>>tonnage;

     if(tonnage>=1 && tonnage<=3)
       {
         bus=bus+tonnage;
       }

     if(tonnage>3 && tonnage<=11)
       {
         truck=truck+tonnage;
       }

     if(tonnage>11)
       {
         train=train+tonnage;
       }
   }

totalTonnage=bus+truck+train;
averageCost=(bus*200 + truck*175 + train*120)/totalTonnage;
cout<<fixed<<setprecision(2);
cout<<"Average cost per tonnage: "<<averageCost<<endl;
cout<<"Bus Percantage: "<<(bus/totalTonnage)*100<<"%"<<endl;
cout<<"Truck Percentage: "<<(truck/totalTonnage)*100<<"%"<<endl;
cout<<"Train Percentage: "<<(train/totalTonnage)*100<<"%"<<endl;
}
