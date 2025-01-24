/* Question No 1:
 Check if a Year is a Leap Year
 Write a program that asks the user to enter a year and uses if-else to determine if it is a leap
 year.
*/
#include<iostream>
using namespace std;
int main()
{
int year;
//Asking User TO Give Some Value
cout<<"Enter a Year : ";
cin>>year;
// We Will count the digit of orignal variable that why stores it into another variable so we can use it
int backupyear=year;
// Assigned a variable name count for digit count
int count=0;
// this variable stores last value but it is not important for us it is for calculation
int r;
//if year == 0 loop will exit
while (year>0)
{
    // In this operation it gives us last element but it is not require. it count every iteration
    // so we may know how many digit are reversed so we will count how many digits are in number
    r=year%10;
    year=year/10;
    count++;
}
// Check user Enter a Year or Not by if count equal 4 and year cannot be negative its always positive
if(count==4&&backupyear>0){
    // This Condition does if year is divisble by 4 then check if year is divisble by 400 or not divisble by 100
    if(backupyear%4==0&&(backupyear%400==0||backupyear%100!=0)){
        // Display the year is Leap
        cout<<backupyear<<" Is A Leap Year "<<endl;
    }
    else{
        //Other wise it is not leap year
        cout<<backupyear<<" Is Not A Leap Year "<<endl;
    }
}
else{
    //for invalid input 
    cout<<"Invalid Please Enter A Valid Year "<<endl;
}
 
 return 0;
}