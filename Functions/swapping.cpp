#include<iostream>
using namespace std;
void swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main()
{
int a;
int b;
cout<<"Enter The Value of a : ";
cin>>a;
cout<<"Enter The Value of b : ";
cin>>b;
swap(a,b);
cout<<"The Value of a : "<<a<<endl;
cout<<"The Value of b : "<<b<<endl;
 return 0;
}