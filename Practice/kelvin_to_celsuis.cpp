/*Write a program in C++ to convert temperature in Kelvin to Celsius.
Sample Output:
Convert temperature in Kelvin to Celsius :
------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Celsius : 26.85*/
#include<iostream>
using namespace std;
int main()
{
float k_temp,C_temp;
cout<<"Enter Temprature in Kelvin : ";
cin>>k_temp;
C_temp=(k_temp - 273.15);
cout<<"Temperature in Kelvin : "<<k_temp<<endl;
cout<<"Temperature in Celsius : "<<C_temp<<endl;
 
 return 0;
}