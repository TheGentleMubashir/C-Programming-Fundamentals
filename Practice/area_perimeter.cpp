/*Write a C++ program to find the Area and Perimeter of a Rectangle.
Sample Output:
Find the Area and Perimeter of a Rectangle :
-------------------------------------------------
Input the length of the rectangle : 10
Input the width of the rectangle : 15
The area of the rectangle is : 150
The perimeter of the rectangle is : 50 */
#include<iostream>
using namespace std;
int main(){
float length,width,area,perimeter;
cout<<"Enter the length of the rectangle : ";
cin>>length;
cout<<"Enter the width of the rectangle : ";
cin>>width;
area=length*width;
perimeter=2*(length+width);
cout<<"The area of the rectangle is : "<<area<<endl;
cout<<"The perimeter of the rectangle is : "<<perimeter;


}