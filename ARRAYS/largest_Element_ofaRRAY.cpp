#include<iostream>
using namespace std;
int main()
{
int size;
cout<< "Enter The Size of Array : ";
cin>>size;
int array[size];
cout<<"Enter The Elements of Array : ";
for(int i=0 ;i<size;i++){
    cin>>array[i];
}

int largest=array[0];
int small=array[0];
for(int i=1;i<size;i++){
    if(array[i]>largest){
        largest=array[i];
    }
}
for(int i=0;i<size;i++){
    if(array[i]<small){
        small=array[i]; 
    }
    
}
cout<<"Largest Number in The Array : "<<largest<<endl;
cout<<"Smallest Number in The Array : "<<small<<endl;
 return 0;
}