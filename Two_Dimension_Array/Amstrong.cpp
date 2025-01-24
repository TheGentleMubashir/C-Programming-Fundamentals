#include<iostream>
#include<cmath>
using namespace std;
int main()
{
int number;
cout<<"Enter a Number : ";
cin>>number;
int back_up2=number;
int backup_number=number;
int count=0;
while (backup_number>0)
{

 count++;
 backup_number/=10;
}
int sum=0;
while (back_up2>0)
{
int num=back_up2%10;
sum+=pow(num,count);
back_up2/=10;
}

if(sum==number){
cout<<number<<" is Amstrong Number\n";
}
else{
cout<<number<<" is Not a Amstrong Number \n";
}


 return 0;
}