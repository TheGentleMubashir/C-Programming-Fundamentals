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
    cout<<"Enter Element "<<i+1<<" : ";
    cin>>arr[i];
}
for (int i = 0; i < size; i++)
{
    for (int j = i+1; j< size; j++)
    {
        if(arr[i]>arr[j]){
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    
}
cout<<"The Sorted Array"<<endl;
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}
for (int i = 0; i < size-1; i+=2)
{

        int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
}
cout<<"\nWave Form"<<endl;
for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
}


 return 0;
}