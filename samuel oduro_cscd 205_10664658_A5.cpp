#include<iostream>
#include<fstream>
#include<string>
#include<cmath>
using namespace std;
struct candidate
{string Name[5];
  int Index[5];
  int Age[5];
  char Gender[5];
  double Score[5];
  char Grade[5];
};
int main()
{ candidate Access;
  int mCount=0,fCount=0,TotalAge=0;
  double averageScore=0,TotalScore=0,averageAge=0;
  for(int i=0;i<=4;i++)

 {
  cout<<"Input student "<<i+1<<"'s name and press enter"<<endl;
cin>>Access.Name[i];
cout<<"Input student "<<i+1<<"'s Index and press enter"<<endl;
cin>>Access.Index[i];
cout<<"Input student "<<i+1<<"'s age and press enter"<<endl;
cin>>Access.Age[i];
TotalAge=TotalAge+Access.Age[i];
cout<<"Input student "<<i+1<<"'s gender, \"f\" for female or \"m\" for male and press enter"<<endl;
cin>>Access.Gender[i];
if (Access.Gender[i]=='f')
    fCount++;
else if (Access.Gender[i]=='m')
    mCount++;
cout<<"Input student "<<i+1<<"'s score and press enter"<<endl;
cin>>Access.Score[i];
TotalScore=TotalScore+Access.Score[i];
if (Access.Score[i] >= 90)
Access.Grade[i]= 'A';
else if (Access.Score[i] >= 80)
Access.Grade[i]= 'B';
else if (Access.Score[i] >= 70)
Access.Grade[i] = 'C';
else if (Access.Score[i] >= 60)
Access.Grade[i]= 'D';
else
Access.Grade[i]= 'F';
 }
 averageAge=TotalAge/5;
 averageScore=TotalScore/5;
for(int i=0;i<=4;i++)
   {
    cout<<i+1<<"."<<Access.Index[i]<<"\t\t"<<Access.Name[i]<<"\t"<<Access.Age[i]<<"\t"<<Access.Gender[i];
    cout<<"\t"<<Access.Score[i]<<"\t"<<Access.Grade[i]<<endl;
   }
    cout<<endl;
    cout<<"The average age is "<<round(averageAge)<<endl;
    cout<<"The average score is "<<averageScore<<endl;
    cout<<"The total number of males is "<<mCount<<endl;
    cout<<"The total number of females is "<<fCount<<endl;
return 0;
}
