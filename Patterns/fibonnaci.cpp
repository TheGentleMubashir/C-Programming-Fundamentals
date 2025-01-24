#include<iostream>
using namespace std;
int main()
{
int a=0,b=1,next;
int nth;
cout<<"Enter nth Number : ";
cin>>nth;
cout<<a<<" ";
cout<<b<<" ";
for(int i=1;i<=nth-2;i++){
    next=a+b;
    cout<<next<<" ";
    a=b;
    b=next;
}
 return 0;
}