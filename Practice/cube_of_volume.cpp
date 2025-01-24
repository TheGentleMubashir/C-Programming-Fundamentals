/*Write a C++ program that calculates the volume of a cube.
Sample Output:
Calculate the volume of a cube :
---------------------------------------
Input the side of a cube : 5
The volume of a cube is : 125
*/
#include<iostream>
using namespace std;
int main(){
    int cube_side;
    cout<<"Enter the side of a cube : ";
    cin>>cube_side;
   int volume_of_cube=(cube_side*cube_side*cube_side);
   cout<<"The Volume of a cube is : "<<volume_of_cube;
    return 0;
}