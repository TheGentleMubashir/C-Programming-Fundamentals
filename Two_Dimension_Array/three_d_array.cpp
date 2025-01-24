#include<iostream>
using namespace std;
int main()
{
int arr[2][2][2][2];
for (int i = 0; i < 2; i++)
{
    
for (int j = 0; j<2; j++)

{
for(int l=0;l<2;l++){
    for (int k = 0; k < 2; k++)
    {
        cout<<"X->"<<i+1;
        cout<<" Y->"<<j+1;
        cout<<" Z->"<<k+1;
        cout<<" L->"<<l+1<<" : ";
        cin>>arr[i][l][j][k];
    }
    
}}
}
for (int i = 0; i < 2; i++)
{
    
for (int j = 0; j<2; j++)

{

for(int l=0;l<2;l++){    for (int k = 0; k < 2; k++)
    {
        cout<<arr[i][j][l][k];
    }
    cout<<" "<<endl;
}
}
}


 return 0;
}