#include<iostream>
using namespace std;

void hospitalCalculation(int days);

main()
{
int days;
cout<<"Enter the number of days you hospital: ";
cin>>days;
hospitalCalculation(days);
}

void hospitalCalculation(int days)
{
int patients;
int doctors=7;
int sumTreated=0;
int sumUntreated=0;
for(int i=1; i<=days; i++)
   {
     cout<<"Number of patients who visited hospital on Day "<<i<<": ";
     cin>>patients;
      if(i%3==0 && sumUntreated>sumTreated)
        {
         doctors++;
        }

      if(patients<=doctors)
        {
          sumTreated=sumTreated+patients;
        }

      else
        {
          sumTreated=sumTreated+doctors;
          sumUntreated=sumUntreated+(patients-doctors);

        }

   }

cout<<"Treated Patients: "<<sumTreated<<endl;
cout<<"Untreated Patients: "<<sumUntreated;
}