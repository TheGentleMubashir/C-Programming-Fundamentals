#include<iostream>
using namespace std;
int main()
{
int row,col;
cout<<"Enter Number of Rows: ";
cin>>row;
cout<<"Enter Number of Columns: ";
cin>>col;
int arr[row][col];
for (int i = 0; i < col; i++)
{
 for (int j = 0;j<col;j++)
 {
  cout<<"Row : "<<i+1<<" Columns : "<<j+1<<"\nEnter Value : ";
  cin>>arr[i][j];
 }
 
}
int max=arr[0][0];
for(int  i=1;i<row;i++)
{
 for(int j=i;j<col; j++)
 {
  if(arr[i][j]>max){
  max=arr[i][j];
  }
 }
 
}
cout<<"\nMaximum in Array : "<<max;
 return 0;
}