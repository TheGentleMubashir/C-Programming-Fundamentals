#include<iostream>
using namespace std;
int main()
{
int number;
int fact=1;
cout<<"Enter a Number : ";
cin>>number;
if(number>1){
for (int  i = 1; i <=number; i++)
{
fact=fact*i;
}
}

cout<<"Factorial  of "<<number<<" is equal to  "<<fact;
 return 0;
}