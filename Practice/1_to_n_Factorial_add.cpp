#include<iostream>
using namespace std;
int main()
{
int n,fact=1,sum=0;
cout<<"Enter The Value of N :";
cin>>n;
for (int i = 1; n>0; i++)
{
 fact=n*fact;
 sum+=fact;
 n--;

}
cout<<"Sum is : "<<sum<<endl;

 return 0;
}