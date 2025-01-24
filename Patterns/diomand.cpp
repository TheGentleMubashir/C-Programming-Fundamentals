#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"\t\tEnter The Number of Lines(Odd Number Makes Perfect Shape) :\t ";
cin>>n;
for(int i=1;i<=n;i++){
    for(int j=i;j<=n;j++){
        cout<<" ";
    }
    for(int k=1;k<=i;k++){
        cout<<"* ";
    }
    
    cout<<endl;
}
for(int i=n-1;i>=1;i--){
    for(int j=i;j<=n;j++){
        cout<<" ";
    }
    for(int k=1;k<=i;k++){
        cout<<"* ";
    }
    
    cout<<endl;
}
 return 0;
}