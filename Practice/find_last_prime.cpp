#include<iostream>
using namespace std;
int main()
{
 
 int number;
 int count;
 cout<<"Enter Number : ";
 cin>>number;
 int isPrime;
 if(number>1){
    count = 0;
    for (int i = number-1; i>1 ; i--)
    {
        isPrime=1;
        for (int j = 2; j*j <=i; j++)
        {
        if(i%j==0){
            isPrime=0;
            break;
        }
        if(isPrime){
            cout<<i<<" is the last prime number before "<<number<<endl;
    break;
        }
        
        }
    }}
 
 
 return 0;
}