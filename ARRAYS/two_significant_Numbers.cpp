/* Write a C++ program to find all elements
 in an array of integers that have at 
 least two significant elements.*/
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter The Size of Array : ";
    cin>>size;
int arr[size];
for (int i = 0; i < size; i++)
{
    cout<<"Enter Element "<<i+1<<" :- ";
    cin>>arr[i];
}
cout<<"The Number With At least Two Significant Digits in Array are : ";
for(int i=0;i<size;i++){
  int number=arr[i];
    int count=0;
    while (number!=0)
    {
        number/=10;
        count++;
    }
    
    if(count>=2){
        cout<<arr[i]<<" ";
    }




}


 return 0;
}