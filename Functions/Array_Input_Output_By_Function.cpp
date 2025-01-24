#include<iostream>
using namespace std;
void input_the_array(int array[],int size){// This Funtion is used To Input The Values Of And Store Them Into Array That Was in Main-Function
cout<<"Enter The Array Elements : ";
for(int i=0;i<size;i++){
    cin>>array[i];}
}
void descending_array(int array[],int size){// The Function to Print The Number in Desceding Order 
    for(int i=0;i<size-1;){
        if(array[i]<array[i+1]){
            int temp=array[i];
            array[i]=array[i+1];
            array[i+1]=temp;
            i=0;
        }
        else{
            i++;
        }
    }
    cout<<"The Descending Array : "<<endl;
   for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
void ascending_array(int array[],int size){// The Function to Print The Number into Ascending Order
    for(int i=0;i<size-1;){
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
    cout<<"The Ascending Array : "<<endl;
   for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int i;
    cout<<"Enter The Size of Array : ";
    cin>>i;
    int a[i];
    input_the_array(a,i);// Input the array
    descending_array(a,i);// Print in 5 4 3 2 1 order
    ascending_array(a,i);//  Print in 1 2 3 4 5 order
 return 0;
}