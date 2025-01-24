
// Question 1:
// Write a program that takes an array of integers and prints the sum of all the elements in the array.
#include<iostream>
using namespace std;
int main()
{   cout<<"Question 1\n";
    cout<<"****************************************************************************************************\n";
    cout<<" Write a program that takes an array of integers and prints the sum of all the elements in the array\n";
    cout<<"****************************************************************************************************\n";
    int size;
    cout<<"Enter the Size of array : ";
    cin>>size;
int arr[size];
for (int i = 0; i < size; i++)
{
    cout<<"Enter Element no "<<i+1<<" : ";
    cin>>arr[i];
}
double sum=0;
for (int i = 0; i < size; i++)
{
    sum+=arr[i];
}
    cout<<"****************************************************************************************************\n";
    cout<<"Sum of All Element in Array : "<<sum<<endl;
    cout<<"****************************************************************************************************\n";

 return 0;
}


































// Question 3:
// Write a program that takes an array of integers and prints the minimum element in the array.

// Question 4:
// Write a program that takes an array of integers and prints the average of all the elements in the array.

// Question 5:
// Write a program that takes an array of integers and prints the elements in reverse order.

// Question 6:
// Write a program that takes an array of integers and a number, and prints the elements in the array that are greater than the given number.

// Question 7:
// Write a program that takes an array of integers and prints the elements in the array that are less than the given number.

// Question 8:
// Write a program that takes an array of integers and prints the elements in the array that are equal to the given number.

// Question 9:
// Write a program that takes an array of integers and prints the elements in the array that are not equal to the given number.

// Question 10:
// Write a program that takes an array of integers and prints the elements in the array that are greater than the given number and less than another given number.
