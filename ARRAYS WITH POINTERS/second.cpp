#include<iostream>
using namespace std;
int main()
{
cout<<"Question 2\n";
cout<<"****************************************************************************************************\n";
cout<<"    Write a program that takes an array of integers and prints the maximum element in the array     \n";
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
     int max=array[0];
     for(int i=0;i<size;i++){
        if(array[i]>max){
            int temp=array[i];
            array[i]=max;
            max=temp;
        }
     }
    cout<<"****************************************************************************************************\n";
     cout<<"\t\t\t\tMaximum Number in Array : "<<max<<endl;
     cout<<"****************************************************************************************************\n";

 return 0;
}