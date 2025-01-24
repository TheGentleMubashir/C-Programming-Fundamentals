/*Write a program that takes as input any change expressed in cents.
It should then compute the number of half-dollars, quarters, dimes, nickels, 
and pennies to be returned, 1  returning as many half-dollars as possible, then quarters, dimes,
nickels, and pennies, in that order. For example, 483 cents should be returned as 9 half-dollars, 
1 quarter, 1 nickel, and 3 pennies*/
#include<iostream>
using namespace std;
int main()
{
int cents;
int remaining;
cout<<"Enter Cents : ";
cin>>cents;
int half_dollar=cents/50;
cout<<half_dollar<<" Half Dollar "<<endl;
remaining=cents%50;
int quarter=remaining/25;
cout<<quarter<<" Quarters"<<endl;
remaining=remaining%25;
int nickel=remaining/5;
cout<<nickel<<" Nickels "<<endl;
remaining=remaining%5;
int pennies=remaining/1;
cout<<pennies<<" Pennies "<<endl;

 return 0;
}