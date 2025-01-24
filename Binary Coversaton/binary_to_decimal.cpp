#include<iostream>
using namespace std;
bool isbinary(int number){
    while(number!=0){
        int digit=number%10;
        if(digit!=0&&digit!=1){
            return false;
        }
        number=number/10;
    }

     return true;
}
int main()
{
int binary;
cout<<"Enter a Binary Number : ";
cin>>binary;
if(!isbinary(binary)){
    cout<<"You Have Not Entered a Binary Number "<<endl;
    return 1;
}
int power=1;
int decimal=0;
while(binary!=0){
int lastdigit=binary%10;
decimal=decimal+lastdigit*(1<<power);
binary=binary/10;
power++;
}
cout<<decimal;
 return 0;
}