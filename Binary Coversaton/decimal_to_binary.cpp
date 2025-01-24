#include<iostream>
using namespace std;
int main()
{
int n=18;
int binary[32];
int index=0;
while(n!=0){
 binary[index]=n%2;
    n=n/2;
    index++;
}
for(int i=index-1;i>=0;i--){
    cout<<binary[i];
}
 return 0;
}