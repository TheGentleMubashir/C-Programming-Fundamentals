/*Write a program in C++ to convert temperature in Kelvin to Fahrenheit.
Sample Output:
Convert temperature in Kelvin to Fahrenheit :
---------------------------------------------------
Input the temperature in Kelvin : 300
The temperature in Kelvin : 300
The temperature in Fahrenheit : 80.33
*/
#include<iostream>
using namespace std;
int main()
{
float k_temp,f_temp;
cout<<"Enter Temprature in Kelvin : ";
cin>>k_temp;
f_temp=(k_temp - 273.15) * (9.0/5.0) + 32;
cout<<"Temperature in Kelvin : "<<k_temp<<endl;
cout<<"Temperature in Farhinhiet : "<<f_temp<<endl;
 
 return 0;
}