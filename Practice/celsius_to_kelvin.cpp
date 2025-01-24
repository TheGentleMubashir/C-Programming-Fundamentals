/* Write a program in C++ to convert temperature in Celsius to Kelvin.
Sample Output:
Convert temperature in Celsius to Kelvin :
---------------------------------------------------
Input the temperature in Celsius : 26.85
The temperature in Celsius : 26.85
The temperature in Kelvin : 300*/
#include<iostream>
using namespace std;
int main()
{
float C_temp,k_temp;
cout<<"Enter Temperature in Celsius : ";
cin>>C_temp;
k_temp=C_temp+273.15;
cout<<"Temperature in Celsius: "<<C_temp<<endl;
cout<<"Temperature in Kelvin : "<<k_temp<<endl;

 
 return 0;
}