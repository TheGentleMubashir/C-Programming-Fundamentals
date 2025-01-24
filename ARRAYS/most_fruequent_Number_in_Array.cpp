/* Write a C++ program to 
find the most frequent element 
in an array of integers.*/
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
int frequent=0;
int maxfreuqency=0;
for (int  i = 0; i < size; i++)
{
int count=0;
    for (int  j =0; j < size; j++)
    {

        if(arr[i]==arr[j]){
            count++;
        }
    }
    if (count>0)
    {
    maxfreuqency=count;
    frequent=arr[i];
    }
}
cout<<"The Most Frequent Element in Array is : "<<frequent<<" with "<<maxfreuqency<<" Number of Times Appeared"<<endl;


 return 0;
}