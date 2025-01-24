#include<iostream>
#include<fstream>
using namespace std;
int main()
{
ofstream output("OK2.exe");

if(!output){
cout<<"File is Not Open\n";
return 1;
}
 return 0;
}