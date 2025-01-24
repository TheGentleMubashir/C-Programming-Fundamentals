#include<iostream>
#include<string>
using namespace std;
bool length_validator(string str1,string str2){
if(str1.length()==str2.length()){
    return true;
}
else{
    return false;
}
}

int main()
{
 string first,second;
 cout<<"Enter The First String : ";
 cin>>first;
 cout<<"Enter The Second String  : ";
cin>>second;
bool isok=length_validator(first,second);
cout<<isok;
 return 0;
}