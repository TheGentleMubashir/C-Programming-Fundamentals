// Question 6:
// Write a program that takes an array of integers and a number, and prints the elements in the array that are greater than the given number.
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout<<"Enter the size of array: ";
    cin>>size;
    int array[size];
    for(int i=0;i<size;i++)
    {
        cout<<"Enter element no "<<i+1<<": ";
        cin>>array[i];
    }
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    cout<<"Elements greater than "<<num<<" are: ";
    for(int i=0;i<size;i++)
    {
        if(array[i]>num)
        {
            cout<<array[i]<<" ";
        }
    }
    cout<<endl;

    return 0;
}
