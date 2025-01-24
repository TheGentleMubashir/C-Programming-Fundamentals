#include<iostream>
using namespace std;
int fact(int number){
int facto=1;
if(number==1||number==0)return 1;
else{
facto=number*fact(number-1);
return facto;
}

}
int main()
{
int number;
cout<<"Enter a Number : ";
cin>>number;
int facto=fact(number);
cout<<facto<<endl;
 return 0;
}