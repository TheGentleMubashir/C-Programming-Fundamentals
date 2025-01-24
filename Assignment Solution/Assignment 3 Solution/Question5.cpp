/*Question No 5:
 Find the Season Based on Month (Switch Statement)
 Write a program that takes a month number (1 for January, 2 for February, etc.) and uses a
 switch statement to determine the season:
 ● 12,1, 2: "Winter"
 ● 3,4,5: "Spring"
 ● 6,7,8: "Summer"
 ● 9,10, 11: "Autumn"
 */
#include<iostream>
using namespace std;
int main()
{
int month;
cout<<"Enter Month of Year : ";
cin>>month;
if(month>=1&&month<=12){
switch (month)
{
    //12,1, 2: "Winter"
case 12:
case 1:
case 2:
cout<<"Winter\n";
    break;
    //3,4,5: "Spring"
case 3:
case 4:
case 5:
cout<<"Spring\n";
    break;
    //6,7,8: "Summer"
 
case 6:
case 7:
case 8:
cout<<"Summer\n";
    break;
    //9,10, 11: "Autumn"
case 9:
case 10:
case 11:
cout<<"Autumn\n";
    break;

// The Default Condition Will Never Run Becease of If codintion Before Switch
default:
cout<<"Error";
    break;
}
}
else{
    cout<<"Invalid Month \n";
}
 return 0;
}