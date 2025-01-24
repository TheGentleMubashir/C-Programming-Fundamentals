#include<iostream>
using namespace std;
void Decimal_to_Binary(int decimal){
    int array[32];
    int number=decimal;
    int index=0;
    while(decimal!=0){
    array[index]=decimal%2;
        index++;
        decimal=decimal/2;
    }
     cout<<number<<" to Binary ";
    for(int i=index-1;i>=0;i--){
    cout<<array[i]<<"";   
    }

}
void Binary_to_Decimal(int binary){
    int number=binary;
    int power=1;
    int decimal=0;
    while(binary!=0){
        int lastdigit=binary%10;
        decimal+=lastdigit*power;
        power=power*2;
        binary/=10;
    }
    cout<<number<<" to Decimal "<<decimal<<endl;
}
int main()
{
int number;
cout<<"Enter Binary or Decimal Number : ";
cin>>number;
char choice;
cout<<"Enter D  for Decimal and B for Binary : ";
cin>>choice;
if(choice=='D'||choice=='d'){
    Binary_to_Decimal(number);
}
if(choice=='B'||choice=='b'){
   Decimal_to_Binary(number);
}
 return 0;
}