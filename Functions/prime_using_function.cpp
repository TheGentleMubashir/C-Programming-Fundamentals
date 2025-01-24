/*Write a program in C to check whether a number is a prime number or not using the function.
Test Data :
Input a positive number : 5
Expected Output :

The number 5 is a prime number.*/
#include<iostream>
using namespace std;
bool prime(int num){
    int count=0;
    
   for (int i = 2; i <=num; i++)
   {
    if (num%i==0)
    {
        count++;
    }
    
   }
   
   if(count<=2){
    return true;
   }
   else{
    return false;

   }
    
}
int main()
{
int number;
cout<<"Enter a Number : ";
cin>>number;
if(number>0){
if(prime(number)){
    cout<<"The "<<number<<" is Prime "<<endl;
}
else{
    cout<<"The "<<number<<" is Not Prime "<<endl;
}
}
else{
    cout<<"Invalid Input Enter The Positive Number "<<endl;
}

 return 0;
}