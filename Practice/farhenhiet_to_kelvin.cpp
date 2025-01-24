/*Write a program in C++ to convert temperature in Fahrenheit to Kelvin.
Sample Output:
Convert temperature in Fahrenheit to Kelvin :
---------------------------------------------------
Input the temperature in Fahrenheit : 80.33
The temperature in Fahrenheit : 80.33
The temperature in Kelvin : 300
*/
#include<iostream>
using namespace std;
int main()
{
float f_temp,k_temp;
cout<<"Enter Temperature in Farhenhiet : ";
cin>>f_temp;
k_temp=(f_temp-32)*(5.0/9.0)+(273.15);
cout<<"Temperature in Farhenhiet : "<<f_temp<<endl;
cout<<"Temperature in Kelvin : "<<k_temp<<endl;

 
 return 0;
}