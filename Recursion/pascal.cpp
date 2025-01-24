#include<iostream>
using namespace std;
int fact(int n) {
    if (n <= 1) return 1;
    else return n * fact(n - 1);
}
int main()
{
int arr[5][5];
for (int  n = 0; n < 5; n++)
{
 for (int r = 0; r < 5; r++)
 {
 if(r>n){
 arr[n][r]=0;
 }
 
 else{int n_fact=fact(n);
 int r_fact=fact(r);
 int n_minus_r_fact=fact(n-r);
 int cal=n_fact/(r_fact*n_minus_r_fact);
 arr[n][r]=cal; 
 }
 }
}
for (int i = 0; i <5; i++)
{
 for (int j = 0; j <5; j++)
 {

 if(arr[i][j]==0){
 continue;
 } 
 else{
 cout<<arr[i][j]<<" ";
 }
 }
 cout<<endl;
}

 return 0;
}