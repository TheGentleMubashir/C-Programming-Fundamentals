#include <iostream>
using namespace std;
int main() {
    int number,reversed;
    //Asking User to Enter 3 digit Number
    cout<<"Enter Three Digit number: ";
    cin>>number;
    cout<<"Reversed Of "<<number<<" is ";
    // number % 10 mean 123/10 = 3 becease 120 is fully divided by 10 and 3 is remained
   reversed=number%10;
   // Output onscreen 3
   cout<<reversed;
   // by number / 10 = 12 means we are dropping 3 beacease it is not divisble by 10 
   number=number/10;
   // number % 10 mean 12/10 = 2 becease 100 is fully divided by 10 and 2 is remained
   reversed=number%10;
   // output onscreen 2
   cout<<reversed;
   // by number/10 = 1 means we are dropping 2 becease it is not divisible by 10
   number=number/10;
   // number % 10 mean 1/10 = 1 becease 1  is not divided by 10 so it return 1
   reversed=number%10;
   //output onscreen 1 
   cout<<reversed;
   // so 123 --> 321 
    return 0;
}