#include<iostream>
using namespace std;
int main()
{
int number,n,digit,rev=0;
 cout<<"Enter Number to Check its Palindrome : ";
 cin>>number;
n=number;
 while (number!=0)
 {
    digit=number%10;
    rev=rev*10+digit;
    number=number/10;
 }
 if(n==rev){
    cout<<"Number is PalinDrome "<<endl;
 }
 else {
    cout<<"Number is Not Palindrome ";
 }
  return 0;
}