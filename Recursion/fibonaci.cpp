#include<iostream>

using namespace std;
int fibbo(int n)
{
if(n<=1){
   return n;
 }
else{
   return fibbo(n-1)+fibbo(n-2);
    }
}

int main()
{
    int n;
    cout << "Enter nth Number : ";
    cin >> n;
    cout<<"The "<<n<<"th Fibbonacci Number is "<<fibbo(n);
    return 0;
}
