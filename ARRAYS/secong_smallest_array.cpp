#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Thee Size of Array : ";
    cin>>n;
int a[n];
for(int i=0;i<n;i++){
    cout<<"Enter array Elment no "<<i+1<<" : ";
    cin>>a[i];
}
int smallest=a[0],secondsmallest=a[1];
for (int i = 0; i < n; i++) {
    if (a[i] > smallest) {
        if (a[i] < secondsmallest) {
            secondsmallest = a[i];
        }
    } else if (a[i] < smallest) {
        secondsmallest = smallest;
        smallest = a[i];
    }}

 cout<<"Smallest Number  of array : "<<smallest;
cout<<endl;
cout<<"Second Smallest Number of Array : "<<secondsmallest;
 return 0;
}