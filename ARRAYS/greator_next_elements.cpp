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
    for(int j=i+1;j<size;j++){
        if(arr[i]<arr[j]){
            cout<<" For "<<arr[i]<<" : The next greater element is "<<arr[j]<<" (found at index "<<j<<" )"<<endl; 
        }
    }
}


 return 0;
}