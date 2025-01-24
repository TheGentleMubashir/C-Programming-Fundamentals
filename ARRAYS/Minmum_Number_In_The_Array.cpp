#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter The Size of The Array : ";
    cin>>size;
    int arr[size];
    for (int i = 0; i <size; i++)
    {
        cout<<"Enter Element No : "<<i+1<<" : ";
        cin>>arr[i];
    }
    int min=arr[0];
    for (int  i = 1; i <size; i++)
    {
       if(arr[i]<min){
        min=arr[i];
       }
    }
     cout<<"The Maximum Number in The Array is  : "<<min;
 return 0;
}