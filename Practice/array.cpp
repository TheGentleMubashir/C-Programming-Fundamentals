#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter The Size of Array : ";
    cin>>size;

    int reverse_array[size];
int array[size];
cout<<"Enter The Element of Array : ";
for(int i=0;i<size;i++){
    cin>>array[i];
}
//Find the largest and smallest elements in an array.
int largest=array[0],smallest=array[0];
for(int j=1;j<size;j++){
    if(array[j]>largest){
        largest=array[j];

    }
    else if(array[j]<smallest){
        smallest=array[j];

    }

    else{
        j++;
    }

}
cout<<"Smallest Number in The Array is : "<<smallest<<endl;
cout<<"Largest Number in The Array is  : "<<largest<<endl;
//Reverse the elements of an array.
for(int i=0;i<size;i++){
    reverse_array[i]=array[size-1-i];
}
for(int i=0;i<size;i++){
    cout<<reverse_array[i]<<" ";
}
//Calculate the average of all elements in an array.
float sum=0;
for(int i=0;i<size;i++){
    sum+=array[i];
}
float average=sum/size;
cout<<"\nAverage of "<<size<<" Elements in Array is : "<<average;
cout<<endl;
return 0;
}
