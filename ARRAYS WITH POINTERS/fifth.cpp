// Question 5:
// Write a program that takes an array of integers and prints the elements in reverse order.
#include<iostream>
using namespace std;
int main()
{
cout<<"Question 5\n";
cout<<"****************************************************************************************************\n";
cout<<"      Write a program that takes an array of integers and prints the elements in reverse order      \n";
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
     cout<<"****************************************************************************************************\n";
      cout<<"\t\t\t\tArray in Reverse Order : ";
     int min=array[0];
     for(int i=size-1;i>=0;i--){
        cout<<array[i]<<" ";
     }
     cout<<"\n****************************************************************************************************\n";
 return 0;
}