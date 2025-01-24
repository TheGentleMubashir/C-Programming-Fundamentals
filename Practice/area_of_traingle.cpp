/*Write a C++ program to find the area of any triangle using Heron's formula.
Sample Output:
Find the area of any triangle using Heron's Formula :
----------------------------------------------------------
Input the length of 1st side of the triangle : 5
Input the length of 2nd side of the triangle : 5
Input the length of 3rd side of the triangle : 5
The area of the triangle is : 10.8253 
*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
float traingle_side1,traingle_side2,traingle_side3,area_of_traingle;
cout<<"Enter the length of 1st Side of the traignle : ";
cin>>traingle_side1;
cout<<"Enter the length of 2nd Side of the traignle : ";
cin>>traingle_side2;
cout<<"Enter the length of 3rd Side of the traignle : ";
cin>>traingle_side3;
float sum=(traingle_side1+traingle_side2+traingle_side3)/2.0;
area_of_traingle=sqrt(sum*(sum-traingle_side1)*(sum-traingle_side2)*(sum-traingle_side3));
cout<<area_of_traingle;
    return 0;
}