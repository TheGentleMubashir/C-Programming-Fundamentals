//Array Sorting:
//Write a program to sort an array of integers
//in ascending or descending order using a
// simple sorting algorithm like bubble sort or selection sort.

#include <iostream>
using namespace std;
int main(){
int size;
cout<<"Enter The Size of Array : ";
cin>>size;
int array[size];
for(int i=0;i<size;i++){
    cout<<"Enter "<<i+1<<" Elemet : ";
    cin>>array[i];
}
cout<<"Ascending Order "<<endl;
for(int i=0;i<size-1;){
    if(array[i]>array[i+1]){
    int temp=array[i+1];
        array[i+1]=array[i];
        array[i]=temp;
        i=0;
        }
    else i++;
}
for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
}
// Descending Order
cout<<endl;
cout<<"Descending Order "<<endl;
for(int i=0;i<size-1;){
    if(array[i]<array[i+1]){
    int temp=array[i+1];
        array[i+1]=array[i];
        array[i]=temp;
        i=0;
        }
    else i++;
}
for(int i=0;i<size;i++){
    cout<<array[i]<<" ";
}

    return 0;
}
