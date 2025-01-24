#include<iostream>
using namespace std;
int main()
{
int num_of_students;
int num_of_subjects=4;
cout<<"Enter Number of Students : ";
cin>>num_of_students;
int marks[num_of_students][num_of_subjects];

for (int students= 0; students < num_of_students; students++)
{
 cout<<"Student "<<students+1<<" Marks \n";
 for (int subject = 0; subject < num_of_subjects;subject++)
 {
  if(subject==0)cout<<"PHYSICS MARKS: ";
  if(subject==1)cout<<"CHEMISTRY MARKS: ";
  if(subject==2)cout<<"MATH MARKS: ";
  if(subject==3)cout<<"ENGLISH MARKS: ";
  cin>>marks[students][subject];
 }
 
}


for (int students= 0; students < num_of_students; students++)
{
 cout<<"\nStudent "<<students+1<<" Marks \n";
 for (int subject = 0; subject < num_of_subjects;subject++)
 {
  if(subject==0)cout<<" PHYSICS MARKS: ";
  if(subject==1)cout<<" CHEMISTRY MARKS: ";
  if(subject==2)cout<<" MATH MARKS: ";
  if(subject==3)cout<<" ENGLISH MARKS: ";
  cout<<marks[students][subject];
 }
 cout<<endl;
}
 return 0;
}