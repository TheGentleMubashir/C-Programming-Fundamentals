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
int largest=a[0],secondlargest=a[1];
for (int i = 0; i < n; i++) {
    if (a[i] < largest) {
        if (a[i] > secondlargest) {
            secondlargest = a[i];
        }
    } else if (a[i] > largest) {
        secondlargest = largest;
        largest = a[i];
    }}

 cout<<"Largest Number  of array : "<<largest;
cout<<endl;
cout<<"Second Largest Number of Array : "<<secondlargest;
 return 0;
}