/* Question No 2:
 Determine the Largest of Three Numbers
 Write a program that takes three numbers as input and uses nested if-else to find the largest
 number among them.
 */

#include<iostream>
using namespace std;
int main()
{
   
int number1,number2,number3;
 //Asking User to Enter all Three Numbers
cout<<"Enter First Number : ";
cin>>number1;
cout<<"Enter Second Number : ";
cin>>number2;
cout<<"Enter Third Number : ";
cin>>number3;
//Check if the all Number are Equal if Equal Display all are equal other wise it goes to else
if(number1==number2&&number2==number3){
    cout<<"All NUMBERS ARE EQUAL "<<endl;
}
else{
    //Check the number1 is largest of all or not if yes display number 1 is largest other wise it goes to ELSE-IF ladder
    if(number1>=number2&&number1>=number3){
        cout<<number1<<" Is The Largest of all"<<endl;
    }
    //Check the number2 is largest of all or not if yes display number 2 is largest other wise it goes to final else 
    else if(number2>=number1&&number2>=number3){
        cout<<number2<<" Is the Largest of all "<<endl;
    }
    // Finally if number 1 and number 2 are not largest so number 3 largest so display it
    else{
        cout<<number3<<" Is the Largest of all"<<endl;
    }
}

return 0;
}