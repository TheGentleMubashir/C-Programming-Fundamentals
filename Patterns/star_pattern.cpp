#include<iostream>
using namespace std;
int main()
{
int n=5;
for(int i=1;i<=n;i++){
    for(int j=n;j>=1;j--){
        cout<<"  ";
    }
    for(int k=n;k<=n;k++){
        cout<<"* ";
    }
    cout<<endl;
}
 return 0;
}