#include<iostream>
using namespace std;
int main()
{
int firstnumber=0,secondnumber=1;
int n;
cout<<"Enter nth Number : ";
cin>>n;
int i=0;
while (i<n)
{
    int temp=firstnumber;
    firstnumber=secondnumber;
    secondnumber=temp+secondnumber;
    i++;
}
cout<<firstnumber<<endl;;
 return 0;
}