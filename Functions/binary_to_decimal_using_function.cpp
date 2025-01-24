/*Write a program in C to convert a decimal number to a binary number using the function.
Test Data :
Input any decimal number : 65
Expected Output :

 The Binary value is : 1000001
 */
#include<iostream>
using namespace std;
void decimal_to_binary(int number){

    while (number!=0)
    {
        int remainder=number%2;
        cout<<remainder;
        number/=2;
    }
    


}

int main()
{
int number ;
cout<<"Enter Decimal Number : ";
cin>>number;
cout<<"The Binary Number of "<<number<<" is : "; 
decimal_to_binary(number);
 return 0;
}