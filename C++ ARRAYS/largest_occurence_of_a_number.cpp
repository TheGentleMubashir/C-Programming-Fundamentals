#include<iostream>
using namespace std;
int main()
{
int size;
cout<<"Enter Size of Array : ";
cin>>size;
int arr[size];
for (int i = 0; i < size; i++)
{
 cout<<"Enter Element "<<i+1<<" : ";
 cin>>arr[i];
}
int number;
cout<<"Enter Number You Find its Occurence  : ";
cin>>number;
int count=0;
for (int i = 0; i < size; i++)
{
 if(number==arr[i]){
 count++;
 }
}
cout<<"The Number "<<number<<" Apears "<<count<<" Times in Array \n";

 return 0;
}