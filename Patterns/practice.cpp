#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"Enter The Size of Array : ";
    cin>>size;
int  array[size];
cout<<"Enter Elements of array : ";
for(int i=0;i<size;i++){
    cin>>array[i];
}
for(int i=0;i<size;){
 if(array[i]>array[i+1]){ 
     int temp=array[i];
    array[i]=array[i+1];
    array[i+1]=temp;
    i=0;
 }
 else{
    i++;
 }
}
for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
}
 return 0;
}