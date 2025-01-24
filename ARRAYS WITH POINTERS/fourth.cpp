// Question 4:
// Write a program that takes an array of integers and prints the average of all the elements in the array.
#include<iostream>
using namespace std;
int main()
{
cout<<"Question 4\n";
cout<<"************************************************************************************************************\n";
cout<<"    Write a program that takes an array of integers and prints the average of all the elements in the array \n";
cout<<"************************************************************************************************************\n";
     int size;
     cout<<"Enter The Size of array : ";
     cin>>size;
     int array[size];
     for (int i = 0; i < size; i++)
     {
        cout<<"Enter Element  no "<<i+1<<" : ";
        cin>>array[i];
     }
     int sum=0;
     for(int i=0;i<size;i++){
        sum+=array[i];
     }
     int avrg=sum/size;
cout<<"************************************************************************************************************\n";
     cout<<"\t\t\t\t\tAverage Of Array : "<<avrg<<endl;
cout<<"************************************************************************************************************\n";

 return 0;
}