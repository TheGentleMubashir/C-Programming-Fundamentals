#include<iostream>
using namespace std;
int main()
{
int arr[2][2];
for(int i=0;i<2;i++)
{
for(int j=0;j<2;j++)
{
cout<<"ROW "<<i+1<<" COL "<<j+1<<" : ";
cin>>arr[i][j];
}
}
int transposed[2][2];
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        transposed[j][i]=arr[i][j];
    }
}
bool is_trans=true;
for(int i=0;i<2;i++){
    for(int j=0;j<2;j++){
        if(arr[i][j]!=transposed[i][j]){
         is_trans=false;
         break;
        }
    }
}
if(is_trans){
cout<<"Symmatric Matrix\n";
}
else{
cout<<"Non-Symmatric Matrix\n";
}
 return 0;
}
