// Question 3:

#include<iostream>
using namespace std;
int main()
{
cout<<"Question 3\n";
cout<<"****************************************************************************************************\n";
cout<<"    Write a program that takes an array of integers and prints the minimum element in the array     \n";
cout<<"****************************************************************************************************\n";
     int size;
     cout<<"Enter The Size of array : ";
     cin>>size;
     int array[size];
     for (int i = 0; i < size; i++)
     {
        cout<<"Enter Element  no "<<i+1<<" : ";
        cin>>array[i];
     }
     int min=array[0];
     for(int i=0;i<size;i++){
        if(array[i]<min){
            int temp=array[i];
            array[i]=min;
            min=temp;
        }
     }
    cout<<"****************************************************************************************************\n";
     cout<<"\t\t\t\tMinimum Number in Array : "<<min<<endl;
     cout<<"****************************************************************************************************\n";

 return 0;
}