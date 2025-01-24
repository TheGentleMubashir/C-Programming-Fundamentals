/* Question No 4:
 Simple Calculator (Switch Statement)
 Write a program that acts as a simple calculator. It should take two numbers and an operator (+,-, *, /) as input, 
 then use a switch statement to perform the appropriate operation.
*/
#include<iostream> 
using namespace std;
int main()
{
float number1,number2;
char operation;
cout<<"Enter Number 1 : ";
cin>>number1;
cout<<"Enter Number 2 : ";
cin>>number2;
cout<<"Enter The Operation (+,/,*,-) : ";
cin>>operation;
switch (operation)
{
case '+':
cout<<number1<<" + "<<number2<<" = "<<number1+number2<<endl;
    break;
case '-':
cout<<number1<<" - "<<number2<<" = "<<number1-number2<<endl;
    break;
    
case '*':
cout<<number1<< " * "<<number2<<" = "<<number1*number2<<endl;
    break;
    
case '/':
if(number2!=0){
cout<<number1<<" / "<<number2<<" = "<<number1/number2<<endl;
}
else {
    cout<<"Division By Zero is Not Possible \n";
}
    break;
default:
cout<<"Invalid Operation \n";
    break;
}
 
 return 0;
}