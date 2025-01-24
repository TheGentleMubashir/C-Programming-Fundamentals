#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"Enter Number of Rows : ";
cin>>n;

for(int i=1;i<=n;i++){
    char a=65;
    for(int j=1;j<=i;j++){
        if(i%2!=0)cout<<j<<" ";
        else cout<<a<<" ";
        a++;
    }
    
    cout<<endl;
}
 return 0;
}