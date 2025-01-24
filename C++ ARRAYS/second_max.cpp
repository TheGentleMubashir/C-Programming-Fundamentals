#include<iostream>
using namespace std;
int main(){
int a=5;
int arr[a];
cout<<"Enter The Elements of array : ";
for(int i=0;i<a;i++){
    cin>>arr[i];
}
int first_max=arr[0];
int second_max=INT_MIN;
for(int i=1;i<a;i++){
    if(arr[i]>first_max){
        second_max=first_max;
        first_max=arr[i];
    }
    else if(arr[i]>second_max){
        second_max=arr[i];
    }
}
cout<<"First Maximum : "<<first_max<<endl;
cout<<"Second Maximum : "<<second_max<<endl;
return 0;
}
