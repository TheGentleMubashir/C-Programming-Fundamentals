#include<iostream>
using namespace std;
int main()
{
 /*
  Real part 1 and Imaginary part 1 is First Complex Number
  Real Part 2 and Imaginary part 2 is Second Complex Number
*/
    // Used Long Double if value increased it will create issue
long double real1,real2,imaginary1,imaginary2;

//Asking user to enter the real part 1 value 
cout<<"Enter Real Number 1 : ";
cin>>real1;
//Asking use to enter the imaginary part 1 value
cout<<"Enter Imaginary Number 1 : ";
cin>>imaginary1;
//Asking user to enter the real part no 2 value
cout<<"Enter Real Number 2 : ";
cin>>real2;
//Asking user to enter the Imaginary part no 2 value
cout<<"Enter Imaginary Number 2 : ";
cin>>imaginary2;
//Variables to store the real parts of Arithmatic Operation
long double real_add,real_sub,real_multi;
//Variables to store the Imaginary parts of Arithmatic Operation
long double imaginary_add,imaginary_sub,imaginary_multi;
//Adding Real Parts 
real_add=real1+real2;
//Adding Imaginary Parts
imaginary_add=imaginary1+imaginary2;
//Subtracting Real parts
real_sub=real1-real2;
//Subtrating imaginarY pARTS
imaginary_sub=imaginary1-imaginary2;
//product of Real Part
real_multi=(real1*real2)-(imaginary1*imaginary2);
//Product of imaginary part
imaginary_multi=(real1*imaginary2)+(real2*imaginary1);
// Output the real and Imaginary Addition Value on Screen like(a + bi)
cout<<real_add<<" + "<<imaginary_add<<"i"<<endl;
//Check if it is Greater or equal to 0 if not Then multiply - with imaginary part
if(imaginary_sub>=0){
// Output the real and Imaginary Subtract Value on Screen like(a + bi)
cout<<real_sub<<" + "<<imaginary_sub<<"i"<<endl;
}
else{
    // Output the real and Imaginary Subtract Value on Screen like(a - bi)
cout<<real_sub<<" - "<<-imaginary_sub<<"i"<<endl;
}
// Output the real and Imaginary Product  Value on Screen like(a + bi)
cout<<real_multi<<" + "<<imaginary_multi<<"i"<<endl;
 return 0;
}