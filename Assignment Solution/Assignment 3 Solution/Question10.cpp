/*Question No 10:
 Airline Ticket Booking System (Switch, Nested if-else)
 Write a program for an airline ticket booking system. It should:
 ● Asktheuser to select a class:
 ○ 1 forEconomy
 ○ 2 forBusiness
 ○ 3 forFirst Class
 ● Basedonthe class, use a switch statement to display the base ticket price:
 ○ Economy: Rs. 5000
 ○ Business: Rs. 12000
 ○ First Class: Rs. 25000
 ● Usenested if-elsewithin each case to apply additional charges based on the
 passenger’s age:
 ○ Age<12:50%discount on base price
 ○ Agebetween 12 and 60: No discount
 ○ Age>60:20%discount
 */
#include<iostream>
#define ECO 5000
#define BUS 10000
#define FIR 25000
using namespace std;
int main()
{
int age;
char confirm;
int chioce;
float airfare=0;
float discount=0;
cout<<"*****************************************************"<<endl;
cout<<"             Airline Ticket Booking System            "<<endl;
cout<<"-----------------------------------------------------"<<endl;
cout<<"We Have Below Type Flights "<<endl;
cout<<"1. Economy Class Flights "<<endl;
cout<<"2. Business Class Flights"<<endl;
cout<<"3. First Class Flights"<<endl;

cin>>chioce;
switch (chioce)
{
case 1:
cout<<"The Economy Class Flight Price is "<<ECO<<endl;
cout<<"Do You Want to Book : (Y/N) : ";
cin>>confirm;
if(confirm=='Y'||confirm=='y'){
cout<<"Enter Your Age : ";
cin>>age;
if(age>0&&age<=12){
    discount=50;
}
else if(age>12&&age<=60)
 discount=100;
}
else{
    discount=20;
}
cout<<"Thanks for Choosing Peshawar Air Line "<<endl;
cout<<"You are Travelling Via Economy Class Flight"<<endl;
airfare=ECO;
cout<<"Your Air Fare is "<<airfare*(discount/100);
    break;
case 2:
cout<<"The Business Class Flight Price is "<<BUS<<endl;
cout<<"Do You Want to Book : (Y/N) : ";
cin>>confirm;
if(confirm=='Y'||confirm=='y'){
cout<<"Enter Your Age : ";
cin>>age;
if(age>0&&age<=12){
    discount=50;
}
else if(age>12&&age<=60)
 discount=100;
}
else{
    discount=20;
}
cout<<"Thanks for Choosing Peshawar Air Line "<<endl;
cout<<"You are Travelling Via Business Class Flight"<<endl;
airfare=BUS;
cout<<"Your Air Fare is "<<airfare*(discount/100);
    break;
case 3:
cout<<"The First Class  Flight Price is "<<FIR<<endl;
cout<<"Do You Want to Book : (Y/N) : ";
cin>>confirm;
if(confirm=='Y'||confirm=='y'){
cout<<"Enter Your Age : ";
cin>>age;
if(age>0&&age<=12){
    discount=50;
}
else if(age>12&&age<=60)
 discount=100;
}
else{
    discount=20;
}
cout<<"Thanks for Choosing Peshawar Air Line "<<endl;
cout<<"You are Travelling Via First Class Flight"<<endl;
airfare=FIR;
cout<<"Your Air Fare is "<<airfare*(discount/100);
default:
cout<<"You Selected Invalid Choice "<<endl;
    break;
}

 return 0;
}