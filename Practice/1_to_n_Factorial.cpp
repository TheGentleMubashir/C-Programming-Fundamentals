#include<iostream>
using namespace std;
int main()
{
int n,fact=1;
cout<<"Enter nth Number :  ";
cin>>n;
int a=1;
for (int i = 1; i <=n; i++)
{
    fact=fact*i;

cout<<"Factorial of "<<a<<" is  : "<<fact<<endl;
a++;
}

 return 0;
}
