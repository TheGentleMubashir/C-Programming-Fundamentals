#include<iostream>
using namespace std;
void Amstrong_Validator(int number){
int sum=0,over_sum=0,back=number,back2=number,count=0;
while(back!=0){
    int temp;
    temp=back%10;
count++;
    back=back/10;
}
for(int i=1;i<=count;i++){
int last=number%10;
for(int i=1;i<=count;i++){
    last=last * i;
    sum+=last;
}

}
}
int main()
{
int number;
cout<<"Enter Number to Check It is Amstrong Or Not : ";
cin>>number;
Amstrong_Validator(number);
 return 0;
}